package com.malmstein.sharedphotos.api

import com.malmstein.sharedphotos.model.InstagramResponseJson
import com.malmstein.sharedphotos.model.ListMediaItemsRequest
import com.malmstein.sharedphotos.model.ListMediaItemsResponse
import kotlinx.serialization.json.Json

class Api {

  var client = RealNetworkClient()

  /**
   * Returns a list of Google Photos.
   *
   * @param token: The token related to the Google Account
   * @return List of photos
   */
  suspend fun googlePhotos(request: ListMediaItemsRequest, token: String): ListMediaItemsResponse {
    val body = Json.stringify(ListMediaItemsRequest.serializer(), request)
    return client.callGooglePhotos(token, body)
  }

  /**
   * Returns a list of Instagram Photos.
   *
   * @param token: The token related to the Instagram Account
   * @return List of photos
   */
  suspend fun instagramPhotos(token: String): InstagramResponseJson {
    return client.callInstagram(token)
  }


}