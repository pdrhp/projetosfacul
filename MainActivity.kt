package com.pedroh.aula042

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val listViewCars:ListView = findViewById(R.id.listViewCarros);
        var arrayCarros = arrayOf(
            "Opala", "Cadillac", "Santana", "Lexus", "Maverick", "Mustang", "Gol", "Opala", "Cadillac", "Santana", "Lexus",
            "Maverick", "Mustang", "Gol", "Opala", "Cadillac", "Santana", "Lexus", "Maverick", "Mustang", "Gol", "Opala",
            "Cadillac", "Santana", "Lexus", "Maverick", "Mustang", "Gol", "Opala", "Cadillac", "Santana", "Lexus", "Maverick",
            "Mustang", "Gol", "Opala", "Cadillac", "Santana", "Lexus", "Maverick", "Mustang", "Gol", "Opala", "Cadillac", "Santana",
            "Lexus", "Maverick", "Mustang", "Gol", "Opala", "Cadillac", "Santana", "Lexus", "Maverick",
            "Mustang", "Gol", "Opala", "Cadillac", "Santana", "Lexus", "Maverick", "Mustang", "Gol", "Opala", "Cadillac",
            "Santana", "Lexus", "Maverick", "Mustang", "Gol", "Opala", "Cadillac", "Santana", "Lexus", "Maverick", "Mustang", "Gol",
            "Opala", "Cadillac", "Santana", "Lexus", "Maverick", "Mustang", "Gol", "Opala", "Cadillac", "Santana", "Lexus", "Maverick",
            "Mustang", "Gol", "Opala", "Cadillac", "Santana", "Lexus", "Maverick", "Mustang", "Gol", "Opala", "Cadillac", "Santana",
            "Lexus", "Maverick", "Mustang", "Gol", "Opala", "Cadillac", "Santana", "Lexus", "Maverick", "Mustang", "Gol", "Opala",
            "Cadillac", "Santana", "Lexus", "Maverick", "Mustang", "Gol"
        );

        var meuAdapter = ArrayAdapter( this,android.R.layout.simple_list_item_1,arrayCarros);

        listViewCars.adapter = meuAdapter;
        
        listViewCars.setOnItemClickListener { parent, view, position, id ->
            Toast.makeText(this, arrayCarros[position], Toast.LENGTH_SHORT).show()
        }



    }
}


