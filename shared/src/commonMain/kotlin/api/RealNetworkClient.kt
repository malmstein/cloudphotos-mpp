package com.malmstein.sharedphotos.api

import com.malmstein.sharedphotos.model.InstagramResponseJson
import com.malmstein.sharedphotos.model.ListMediaItemsResponse
import io.ktor.client.HttpClient
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.request.*
import io.ktor.http.takeFrom
import kotlinx.serialization.json.Json

interface NetworkClient {
  suspend fun callGooglePhotos(token: String, bodyData: String): ListMediaItemsResponse
}

open class RealNetworkClient : NetworkClient {

  private val client: HttpClient = HttpClient {
    install(JsonFeature) {
      serializer = KotlinxSerializer(Json.nonstrict).apply {
        setMapper(ListMediaItemsResponse::class, ListMediaItemsResponse.serializer())
        setMapper(InstagramResponseJson::class, InstagramResponseJson.serializer())
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
      url("https://api.instagram.com/v1/users/self/media/recent?access_token=$token")
    }
}