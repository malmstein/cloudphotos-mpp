package com.malmstein.sharedphotos.model

import com.malmstein.sharedphotos.emptyString
import kotlinx.serialization.Optional
import kotlinx.serialization.Serializable

@Serializable
data class InstagramResponseJson(
  val meta: InstagramMetaJson,
  val pagination: InstagramPaginationJson?,
  val data: MutableList<InstagramMediaJson>
) {
  companion object {
    fun empty(): InstagramResponseJson {
      return InstagramResponseJson(
        InstagramMetaJson.empty(),
        InstagramPaginationJson.empty(),
        mutableListOf()
      )
    }
  }
}

@Serializable
data class InstagramMetaJson(
  val code: Int,
  val errorType: String = emptyString,
  val errorMessage: String = emptyString
) {
  companion object {
    fun empty(): InstagramMetaJson {
      return InstagramMetaJson(0, emptyString, emptyString)
    }

    fun success(): InstagramMetaJson {
      return InstagramMetaJson(200, emptyString, emptyString)
    }
  }
}

@Serializable
data class InstagramPaginationJson(
  val nextUrl: String = emptyString,
  val next_max_id: String = emptyString
) {
  companion object {
    fun empty(): InstagramPaginationJson {
      return InstagramPaginationJson(emptyString, emptyString)
    }
  }
}

@Serializable
data class InstagramMediaJson(
  val id: String,
  val link: String,
  val type: String,
  val images: InstagramResolutionJson
) {
  companion object {
    fun empty(): InstagramMediaJson {
      return InstagramMediaJson(
        emptyString,
        emptyString,
        emptyString,
        InstagramResolutionJson.empty()
      )
    }
  }
}

@Serializable
data class InstagramResolutionJson(
  val standard_resolution: InstagramImageJson,
  val thumbnail: InstagramImageJson
) {
  companion object {
    fun empty(): InstagramResolutionJson {
      return InstagramResolutionJson(InstagramImageJson.empty(), InstagramImageJson.empty())
    }
  }
}

@Serializable
data class InstagramImageJson(
  val url: String,
  val width: Int,
  val height: Int
) {
  companion object {
    fun empty(): InstagramImageJson {
      return InstagramImageJson(emptyString, 0, 0)
    }
  }
}

@Serializable
data class InstagramPhoto(val photoId: String,
                          val link: String,
                          val thumbnailUrl: String,
                          val fullsizeUrl: String) {
  companion object{
    fun fromJson(media: InstagramMediaJson): InstagramPhoto {
      val thumbnailUrl = media.images.thumbnail.url
      val fullsizeUrl = media.images.standard_resolution.url
      return InstagramPhoto(media.id, media.link, thumbnailUrl, fullsizeUrl)
    }
  }
}
