void LongestWord(string text)
{
string tmpWord = "";
string maxWord = "";

for(int i=0; i < text.length(); i++)
{
    /// If founded space, rewrite word
    if(text[i] != ' ')
        tmpWord += text[i];
    else
        tmpWord = "";
    /// All the time check word length and if tmpWord > maxWord => Rewrite.
    if(tmpWord.length() > maxWord.length())
        maxWord=tmpWord;
}
cout << "Longest Word: " << maxWord << endl;
cout << "Word Length: " << maxWord.length() << endl;
}
