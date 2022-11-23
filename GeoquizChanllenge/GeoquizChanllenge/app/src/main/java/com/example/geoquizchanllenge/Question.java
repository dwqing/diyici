package com.example.geoquizchanllenge;

public class Question {
    private int mTextResId;
    private boolean mAnswerTure;

    public Question(int textResId, boolean answerTure) {
        mAnswerTure = answerTure;
        mTextResId = textResId;
    }

    public boolean isAnswerTure() {
        return mAnswerTure;
    }

    public void setAnswerTure(boolean answerTure) {
        mAnswerTure = answerTure;
    }

    public int getTextResId() {
        return mTextResId;
    }

    public void setTextResId(int textResId) {
        mTextResId = textResId;
    }
}
