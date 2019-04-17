package com.malmstein.sharedphotos.api

import com.malmstein.sharedphotos.model.InstagramResponseJson
import com.malmstein.sharedphotos.model.ListMediaItemsResponse
import io.ktor.client.HttpClient
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.request.*
import io.ktor.http.takeFrom
import kotlinx.serialization.json.Json

private fun HttpRequestBuilder.apiGet(path: String, bodyData: String) { // 5
  url {
    takeFrom("https://photoslibrary.googleapis.com/v1") // 7
    encodedPath = path // 8
    body = bodyData
  }
}

interface NetworkClient {
  suspend fun callGooglePhotos(token: String, bodyData: String): ListMediaItemsResponse
}

open class RealNetworkClient : NetworkClient {

  private val client: HttpClient = HttpClient {
    install(JsonFeature) {
      serializer = KotlinxSerializer(Json.nonstrict).apply {
        setMapper(ListMediaItemsResponse::class, ListMediaItemsResponse.serializer())
      }
    }
  }

  override suspend fun callGooglePhotos(token: String, bodyData: String): ListMediaItemsResponse =
    client.post {
      url {
        takeFrom("https://photoslibrary.googleapis.com/v1")
        encodedPath = "mediaItems:search/access_token?=$token"
        body = bodyData
      }
    }

  suspend fun callInstagram(token: String): InstagramResponseJson =
    client.get {
      url {
        takeFrom("https://api.instagram.com/v1")
        encodedPath = "users/self/media/recent/access_token?=$token/count?=200"
      }
    }
}