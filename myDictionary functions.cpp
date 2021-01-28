//overloading the equal operator
//This is our final version:
void Dictionary::operator =(const Dictionary& rightSide)
{
    int newLength = strlen(rightSide.value);
    if (newLength > maxLength)
    {
        delete [] value;
        maxLength = newLength;
        value = new char[maxLength + 1];
    }
    for (int i = 0; i < newLength; i++)
        value[i] = rightSide.value[i];
    value[newLength] = '\0';
}

//copy constructor
StringVar::StringVar(const char a[]) : maxLength(strlen(a))
{
    value = new char[maxLength + 1];//+1 is for '\0'.
    strcpy(value, a);
}


//copy constructor
//Uses cstring, cstddef, and cstdlib:
StringVar::StringVar(const StringVar& stringObject)
    : maxLength(stringObject.length( ))
{
    value = new char[maxLength + 1];//+1 is for '\0'.
    strcpy(value, stringObject.value);
}


//destructor
StringVar::~StringVar( )
{
    delete [] value;
}
