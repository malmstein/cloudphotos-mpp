package com.malmstein.sharedphotos.android

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.malmstein.sharedphotos.data.PhotosRepository
import com.malmstein.sharedphotos.platform.platformName

class PhotosActivity : AppCompatActivity() {

  override fun onCreate(savedInstanceState: Bundle?) {
    super.onCreate(savedInstanceState)
    setContentView(R.layout.activity_photos)

    title = platformName()

    val layoutManager = GridLayoutManager(applicationContext, 3)
    val photosAdapter = PhotoAdapter(this)

    val recyclerView = findViewById<RecyclerView>(R.id.photos_recycler_view)
    recyclerView.layoutManager = layoutManager
    recyclerView.adapter = photosAdapter

    val repository = PhotosRepository()
    repository.loadInstagramAsync {
      photosAdapter.setResults(it)
    }
  }
}
