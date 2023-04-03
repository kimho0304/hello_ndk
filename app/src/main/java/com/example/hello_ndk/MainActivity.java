package com.example.hello_ndk;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

import org.w3c.dom.Text;

class PrimitiveReturned{
    static {
    System.loadLibrary("helloNdk");
}
    public native byte returnedChar(); //1

    public native char returnedUnsignedChar(); //2

    public native short returnedShort(); //3

    public native int returnedUnsignedShort(); //4

    public native int returnedInt();   //5

    public native long returnedUnsignedInt(); //6

    public native int returnedLong(); //7

    public native long returnedUnsignedLong(); //8

    public native float returnedFloat(); //9

    public native double returnedDouble(); //10

    public native long returnedLongLong(); //11


    public PrimitiveReturned(TextView t){

        byte b = returnedChar();//1

        char uc = returnedUnsignedChar(); //2

        short s = returnedShort(); //3

        int us = returnedUnsignedShort(); //4

        int i_int = returnedInt(); //5

        long l = returnedUnsignedInt(); //6

        int i_long = returnedLong(); //7

        long ul = returnedUnsignedLong(); //8

        float f = returnedFloat(); //9

        double d = returnedDouble(); //10

        long ll = returnedLongLong(); //11

        /*

        System.out.println("b:"+b); //1

        System.out.println("uc:"+uc); //2s

        System.out.println("s:"+s); //3

        System.out.println("us:"+us); //4

        System.out.println("i_int:"+i_int); //5

        System.out.println("l:"+l); //6

        System.out.println("i_long:"+i_long); //7

        System.out.println("ul:"+ul); //8

        System.out.println("f:"+f); //9

        System.out.println("d:"+d); //10

        System.out.println("ll:"+ll); //11"""*/

        t.setText("Unsigned Int: "+l);

    }

}

public class MainActivity extends AppCompatActivity {
        private TextView text;
        private TextView text2;

    static {
            System.loadLibrary("helloNdk");
        }
        public native String print_ndk(String text);

        @Override
        protected void onCreate(Bundle savedInstanceState) {
            super.onCreate(savedInstanceState);
            setContentView(R.layout.activity_main);

            text = (TextView) findViewById(R.id.text);
            text2 = (TextView) findViewById(R.id.text2);

            String print = print_ndk("hello_ndk");

            text.setText(print);

            new PrimitiveReturned(text2);
        }


}