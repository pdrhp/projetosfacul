package com.pedroh.aula3

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import org.w3c.dom.Text

class MainActivity : AppCompatActivity() {

    private lateinit var edittext1:EditText
    private lateinit var edittext2:EditText
    private lateinit var btnVerificar:Button
    private lateinit var textResultadoAqui:TextView

   override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        edittext1 = findViewById(R.id.edittext1)
        edittext2 = findViewById(R.id.edittext2)
        btnVerificar = findViewById(R.id.btnVerificar)
       textResultadoAqui = findViewById(R.id.textResultadoAqui)

        btnVerificar.setOnClickListener {
            var resultado:Float = edittext1.text.toString().toFloat() / edittext2.text.toString().toFloat()

            if(resultado >= 0.7){
                textResultadoAqui.text = "Resultado aqui: Gasolina"
            }
            else{
                textResultadoAqui.text = "Resultado aqui: Alcool"
            }


        }

    }
}
