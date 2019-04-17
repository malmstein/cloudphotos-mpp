package com.malmstein.sharedphotos.android

import android.os.Bundle
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity
import com.malmstein.sharedphotos.data.PhotosRepository

class PhotosActivity : AppCompatActivity() {

  override fun onCreate(savedInstanceState: Bundle?) {
    super.onCreate(savedInstanceState)
    setContentView(R.layout.activity_photos)

    val textView = findViewById<TextView>(R.id.sampleText)
    val repository = PhotosRepository()
    repository.loadFakeResult {
      textView.text = it
    }
  }
}
