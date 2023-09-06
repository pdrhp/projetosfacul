package com.pedroh.desafio02

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.ImageView
import android.widget.TextView

class SegundaActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_segunda)

        var arrayImagens = arrayOf(R.drawable.opalao, R.drawable.mustang, R.drawable.gol, R.drawable.brasilia, R.drawable.lexus, R.drawable.civic, R.drawable.azira, R.drawable.tracker, R.drawable.fluence, R.drawable.mustang, R.drawable.gol, R.drawable.brasilia, R.drawable.lexus, R.drawable.civic, R.drawable.azira, R.drawable.tracker, R.drawable.fluence, R.drawable.mustang, R.drawable.gol, R.drawable.brasilia, R.drawable.lexus, R.drawable.civic, R.drawable.azira, R.drawable.tracker, R.drawable.fluence, R.drawable.mustang, R.drawable.gol, R.drawable.brasilia, R.drawable.lexus, R.drawable.civic, R.drawable.azira, R.drawable.tracker, R.drawable.fluence)
        val carImage:ImageView = findViewById(R.id.imageViewCarImage);
        val carName:TextView = findViewById(R.id.textViewCarName);
        val intent = intent;
        var stringCarName = intent.getStringExtra("nomeCarro")
        var positionCar = intent.getIntExtra("positionCarro", 0);



        carImage.setImageResource(arrayImagens[positionCar]);
        carName.setText(stringCarName);
    }
}