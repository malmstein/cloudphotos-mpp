package com.malmstein.sharedphotos.data

import com.malmstein.sharedphotos.ApplicationDispatcher
import com.malmstein.sharedphotos.api.Api
import com.malmstein.sharedphotos.api.HttpBinClient
import com.malmstein.sharedphotos.model.GooglePhoto
import com.malmstein.sharedphotos.model.InstagramPhoto
import com.malmstein.sharedphotos.model.ListMediaItemsRequest
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch

class PhotosRepository(private val api: Api = Api()) {

  suspend fun loadGooglePhotos(token: String): List<GooglePhoto> {
    val request = ListMediaItemsRequest(pageToken = null)
    return api.googlePhotos(request, token).mediaItems
  }

  suspend fun loadInstagramPhotos(token: String): List<InstagramPhoto> {
    return api.instagramPhotos(token).data.map { InstagramPhoto.fromJson(it) }
  }
  fun loadFakeResult(callback: (String) -> Unit) {
    GlobalScope.apply {
      launch(ApplicationDispatcher) {
        val client = HttpBinClient()
        val result = client.runGet()
        callback(result)
      }
    }
  }

  fun loadInstagramAsync(callback: (List<InstagramPhoto>) -> Unit) {
    GlobalScope.apply {
      launch(ApplicationDispatcher) {
        val photos = api.instagramPhotos("31057279.3b3c298.9aa60ae834b44549a776ff7666ae7824").data.map { InstagramPhoto.fromJson(it) }
        callback(photos)
      }
    }
  }

}