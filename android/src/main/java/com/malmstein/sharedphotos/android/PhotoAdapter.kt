package com.malmstein.sharedphotos.android

import android.app.Activity
import android.content.Context
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.bumptech.glide.Priority
import com.bumptech.glide.request.RequestOptions
import com.malmstein.sharedphotos.model.InstagramPhoto

class PhotoAdapter(private val activity: Activity) :
  RecyclerView.Adapter<PhotoAdapter.PhotoViewHolder>() {

  companion object {
    private val EMPTY_RESULTS = emptyList<InstagramPhoto>()
    const val THUMBNAIL_SIZE_REDUCER = 0.6
  }

  private var results = EMPTY_RESULTS

  override fun getItemCount() = results.size

  internal fun setResults(results: List<InstagramPhoto>) {
    this.results = results
    notifyDataSetChanged()
  }

  override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): PhotoViewHolder {
    val view = LayoutInflater.from(parent.context).inflate(R.layout.photo_list_item, parent, false)
    return PhotoViewHolder(view)
  }

  override fun onBindViewHolder(holder: PhotoViewHolder, position: Int) {
    val result = results[position]
    val thumbnailSize = setPhotoGridSize(holder.photoView)

    val size = (thumbnailSize * THUMBNAIL_SIZE_REDUCER).toInt()
    val options = RequestOptions()
      .centerCrop()
      .override(size, size)

    Glide.with(activity)
      .load(result.thumbnailUrl)
      .apply(options)
      .dontAnimate()
      .priority(Priority.HIGH)
      .into(holder.photoView)
  }

  private fun setPhotoGridSize(view: View): Int {
    val layoutParams = view.layoutParams
    val width = getScreenWidth(view.context)
    val thumbnailSize = width / 3
    layoutParams.width = thumbnailSize
    layoutParams.height = thumbnailSize
    view.layoutParams = layoutParams
    return thumbnailSize
  }

  private fun getScreenWidth(context: Context): Int {
    return context.resources.displayMetrics.widthPixels
  }

  class PhotoViewHolder internal constructor(itemView: View) : RecyclerView.ViewHolder(itemView) {
    internal val photoView: ImageView = itemView.findViewById(R.id.photo_view)
  }
}
