import android.os.Bundle
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity

class MainActivity : AppCompatActivity() {
    val text: TextView? = null

    class static (){
        System.loadLibrary("helloNdk");
    }

    external fun print_ndk(text: String?): String?

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        text = findViewById(R.id.text)

        val print = print_ndk("hello_ndk")

        text.setText("텍스트 뷰 설정");
    }
}