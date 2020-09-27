package com.example.firebase
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.google.firebase.auth.FirebaseAuth
import kotlinx.android.synthetic.main.activity_home.*
import kotlinx.android.synthetic.main.activity_main.*

/* enum class ProviderType {
    BASIC
} */


class HomeActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_home)

        // setup
      //  val bundle:Bundle?=intent.extras
       // val email:String?=bundle?.getString("email")
     //  setup()

    /*    val bundle:Bundle?=intent.extras
        val email:String?=bundle?.getString("email")
        val provider:String?=bundle?.getString("provider")
       // setup( email: email ?: "", provider: provider ?: "")
        providerToView(provider ?: "")
        emailToView( email ?: "") */
    }

/*
    private fun providerToView(provider:String ){
        title= "Inicio"
        providerTextView.text = provider
      /*  closebutton.setOnClickListener {
            FirebaseAuth.getInstance().signOut()
            onBackPressed()
        } */
    }


    private fun emailToView(email: String){
        title= "Inicio"
        emailTextView.text = email
        closebutton.setOnClickListener {
            FirebaseAuth.getInstance().signOut()
            onBackPressed()
        }

    }  */

}
