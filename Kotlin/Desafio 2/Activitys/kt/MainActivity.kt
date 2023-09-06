package com.pedroh.desafio02

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Adapter
import android.widget.ArrayAdapter
import android.widget.ListView

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val lvCarros:ListView = findViewById(R.id.listViewCarros);
        var arrayCarros = arrayOf("Opala", "Mustang", "Gol", "Brasilia", "Lexus", "Civic", "Azira", "Tracker", "Fluence", "Mustang", "Gol", "Brasilia", "Lexus", "Civic", "Azira", "Tracker", "Fluence", "Mustang", "Gol", "Brasilia", "Lexus", "Civic", "Azira", "Tracker", "Fluence", "Mustang", "Gol", "Brasilia", "Lexus", "Civic", "Azira", "Tracker", "Fluence");

        var  meuAdapter = ArrayAdapter(this, android.R.layout.simple_list_item_1, arrayCarros);

        lvCarros.setOnItemClickListener { parent, view, position, id ->
            val intent = Intent(this, SegundaActivity::class.java)
            intent.putExtra("positionCarro", position)
            intent.putExtra("nomeCarro", arrayCarros[position]);
            startActivity(intent);
        }

        lvCarros.adapter = meuAdapter;




    }
}