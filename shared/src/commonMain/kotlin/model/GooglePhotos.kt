package com.malmstein.sharedphotos.model

import kotlinx.serialization.Serializable
import kotlinx.serialization.json.Json

@Serializable
open class ListMediaItemsResponse(
  var mediaItems: MutableList<GooglePhoto>,
  var nextPageToken: String?
)

@Serializable
data class ListMediaItemsRequest(
  val filter: Filter = Filter(MediaTypeFilter(listOf(MediaType.PHOTO))),
  val pageToken: String?
) {
  companion object {
    fun fromString(string: String): ListMediaItemsRequest? {
      return Json.parse(ListMediaItemsRequest.serializer(), string)
    }
  }
}


@Serializable
data class ListMediaItemsLastPageRequest(
  val filters: Filter = Filter(
    MediaTypeFilter(
      listOf(
        MediaType.PHOTO
      )
    )
  )
)

@Serializable
data class Filter(val mediaTypeFilter: MediaTypeFilter)

@Serializable
data class MediaTypeFilter(val mediaTypes: List<MediaType>)

enum class MediaType {
  PHOTO, VIDEO
}

@Serializable
data class ListMediaItemError(
  val code: Int,
  val mediaItem: MutableList<GooglePhoto>,
  val nextToken: String?
) : ListMediaItemsResponse(mediaItem, nextToken)

@Serializable
data class MediaMetadata(
  var width: String,
  var height: String
)

@Serializable
class GooglePhoto(
  val id: String,
  val filename: String,
  val mediaMetadata: MediaMetadata,
  var baseUrl: String
)
