package com.example.geoquizchanllenge;

import androidx.appcompat.app.AppCompatActivity;

import android.media.Image;
import android.os.Bundle;
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
        setContentView(R.layout.activity_main);//将布局转化为图像显示

        mQuestionTextview = (TextView) findViewById(R.id.question_text_view);//question——button
        mQuestionTextview.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                mCurrentIndx = (mCurrentIndx+1)%mQuestionBank.length;
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
            }
        });
        mPrevButton = (ImageButton) findViewById(R.id.prev_button);
        mPrevButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                mCurrentIndx = (mCurrentIndx - 1+6*mQuestionBank.length) % mQuestionBank.length;
                updateQuestion();
            }
        });

        updateQuestion();
    }

    private void updateQuestion() {
        int question = mQuestionBank[mCurrentIndx].getTextResId();
        mQuestionTextview.setText(question);
    }
    private void checkAnswer(boolean userPressedTrue){
        boolean answerIsTrue = mQuestionBank[mCurrentIndx].isAnswerTure();

        int messageResId = 0 ;

        if (userPressedTrue == answerIsTrue){
            messageResId = R.string.correct_toast;
        }else{
            messageResId = R.string.incorrect_toast;
        }
        Toast.makeText(this,messageResId , Toast.LENGTH_SHORT).show();
    }
}