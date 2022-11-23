package com.example.geoquizchanllenge;

import androidx.appcompat.app.AppCompatActivity;

import android.media.Image;
import android.os.Bundle;
import android.util.Log;
import android.view.Gravity;
import android.view.View;
import android.widget.Button;
import android.widget.ImageButton;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    private Button mTrueButton;
    private Button mFalseButton;
    private ImageButton mNextButton;
    private ImageButton mPrevButton;
    private TextView mQuestionTextview;
    private double x = 0;
    private double y;

    private static final String KEY_INFEX = "index";
    private static final String TAG = "MainAcivity";

    private Question[] mQuestionBank = new Question[]{
            new Question(R.string.question_australia, true),
            new Question(R.string.question_oceans, true),
            new Question(R.string.question_mideast, false),
            new Question(R.string.question_africa, false),
            new Question(R.string.question_americas, true),
            new Question(R.string.question_asia, true)

    };//对象成分

    private int mCurrentIndx = 0;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Log.d(TAG, "onCreate(Bundle) called");
        setContentView(R.layout.activity_main);//将布局转化为图像显示
        if (savedInstanceState != null) {
            mCurrentIndx = savedInstanceState.getInt(KEY_INFEX, 0);
        }

        mQuestionTextview = (TextView) findViewById(R.id.question_text_view);//question——button
        mQuestionTextview.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                mCurrentIndx = (mCurrentIndx + 1) % mQuestionBank.length;
                updateQuestion();
            }
        });

        mTrueButton = (Button) findViewById(R.id.ture_button);      //true-button代码
        mTrueButton.setOnClickListener(new View.OnClickListener() {  // 构建监听器
            @Override
            public void onClick(View v) {
                checkAnswer(true);

            }    //调用方法
        });
        mFalseButton = (Button) findViewById(R.id.false_button);  //false-button代码
        mFalseButton.setOnClickListener(new View.OnClickListener() {  //构建监听器
            @Override
            public void onClick(View v) {
                checkAnswer(false);


            }  //调用方法
        });
        mNextButton = (ImageButton) findViewById(R.id.next_button);  //next-button代码
        mNextButton.setOnClickListener(new View.OnClickListener() {  //构建监听器
            @Override
            public void onClick(View view) {
                mCurrentIndx = (mCurrentIndx + 1) % mQuestionBank.length;//除以6即数组个数制造循环
                updateQuestion();
                mTrueButton.setEnabled(true);
                mFalseButton.setEnabled(true);
            }
        });
        mPrevButton = (ImageButton) findViewById(R.id.prev_button);
        mPrevButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                mCurrentIndx = (mCurrentIndx - 1 + 6 * mQuestionBank.length) % mQuestionBank.length;
                updateQuestion();
            }
        });

        updateQuestion();
    }

    private void updateQuestion() {
        int question = mQuestionBank[mCurrentIndx].getTextResId();
        mQuestionTextview.setText(question);
    }

    private void checkAnswer(boolean userPressedTrue) {
        boolean answerIsTrue = mQuestionBank[mCurrentIndx].isAnswerTure();

        mTrueButton.setEnabled(false);
        mFalseButton.setEnabled(false);

        int messageResId = 0;

        if (userPressedTrue == answerIsTrue) {
            messageResId = R.string.correct_toast;
            x=(x+1) % mQuestionBank.length;
        } else {
            messageResId = R.string.incorrect_toast;
        }

        Toast.makeText(this, messageResId, Toast.LENGTH_SHORT).show();
        if (mCurrentIndx == 5) {
            y=x*100/6.0;
            Toast.makeText(MainActivity.this, "你的正确率为"+y+"%", Toast.LENGTH_SHORT).show();
        }
    }


    @Override
    public void onStart() {
        super.onStart();
        Log.d(TAG, "onStart() called");
    }

    @Override
    public void onResume() {
        super.onResume();
        Log.d(TAG, "onResume() called");
    }

    @Override
    public void onPause() {
        super.onPause();
        Log.d(TAG, "onPause() called");
    }

    @Override
    public void onSaveInstanceState(Bundle savedInstanceState) {
        super.onSaveInstanceState(savedInstanceState);
        Log.i(TAG, "onSaveInstanceState");
        savedInstanceState.putInt(KEY_INFEX, mCurrentIndx);
    }

    @Override
    public void onStop() {
        super.onStop();
        Log.d(TAG, "onStop() called");
    }


    public void onDestory() {
        super.onDestroy();
        Log.d(TAG, "onDestory() called");
    }
}