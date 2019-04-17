package com.malmstein.sharedphotos.mock

import com.malmstein.sharedphotos.api.NetworkClient
import com.malmstein.sharedphotos.model.ListMediaItemsResponse

class MockRealNetworkClient(private val success: Boolean) : NetworkClient {

  override suspend fun callGooglePhotos(token: String, bodyData: String): ListMediaItemsResponse {
    return if (success) {
      ListMediaItemsResponse(mutableListOf(), "")
    } else {
      ListMediaItemsResponse(mutableListOf(), "")
    }
  }
}