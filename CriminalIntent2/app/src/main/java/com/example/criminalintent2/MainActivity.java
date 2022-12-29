package com.example.criminalintent2;


import android.app.Fragment;
import android.app.FragmentManager;
import android.os.Bundle;

import androidx.appcompat.app.AppCompatActivity;



public class MainActivity extends  SingleFragmentActivity{

    @Override
    protected Fragment createFragment() {
        return new CrimeFragment();
    }

}