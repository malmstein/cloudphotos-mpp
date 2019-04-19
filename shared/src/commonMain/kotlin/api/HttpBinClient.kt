package com.malmstein.sharedphotos.api

import com.malmstein.sharedphotos.model.ListMediaItemsResponse
import io.ktor.client.HttpClient
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.request.get
import io.ktor.http.takeFrom
import kotlinx.serialization.json.Json

class HttpBinClient : RealNetworkClient() {

  private val client: HttpClient = HttpClient {
    install(JsonFeature) {
      serializer = KotlinxSerializer(Json.nonstrict).apply {
        setMapper(ListMediaItemsResponse::class, ListMediaItemsResponse.serializer())
      }
    }
  }

  suspend fun runGet(): String {
    println("HTTPBIN: Starting GET")
    return try {
      val result: String = client.get {
        url {
          takeFrom("https://httpbin.org")
          encodedPath = "get"
        }
      }
      "HTTPBIN: Success! Got: \n$result"
    } catch (exception: Exception) {
      "HTTPBIN: Error! : $exception"
    }
  }
}