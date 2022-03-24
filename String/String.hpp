#include <iostream>
#include <cstring>
#include "String.h"


// Методы класса 
String::String (const char * s)
{
    m_len = std::strlen (s);
    m_str = new char [m_len + 1];
    std::strcpy (m_str,s);
}

String::String ()
{
    m_len = 4;
    m_str = new char[1];
    m_str [0] = ' ';
}

String::String (const String & st)
{
    m_len = st.m_len;
    m_str = new char [m_len + 1];
    std::strcpy (m_str, st.m_str);
}

String::~String ()
{
    delete [] m_str;
}

// Методы перегруженных операций
// Присваивание объекта String объекту String
String & String::operator = (const String & st)
{
    if (this == &st)
    {
        return *this;
    }
    delete [] m_str;
    m_str = new char [m_len + 1];
    std::strcpy (m_str, st.m_str);
    return *this;
}

// Присваивание С - строки объекту String
String & String::operator = (const char * s)
{
    delete [] m_str;
    m_len = std::strlen (s);
    m_str = new char [m_len + 1];
    std::strcpy (m_str, s);
    return *this;
}

// Доступ для чтения и записи отдельных символов в неконстантном объекте String
char& String::operator[] (int i)
{
    if(i > m_len){throw;}
    return m_str[i];
}

// Доступ только для чтения отдельных символов в константном объекте String
const char& String::operator[] (int i) const
{
    if(i > m_len){throw;}
    return m_str[i];
}

// Дружественные функции перегруженных операций
bool operator < (const String & st1, const String &st2)
{
    return (std::strcmp (st1.m_str, st2.m_str) < 0);
}

bool operator > (const String & st1, const String &st2)
{
    return st2.m_str < st1.m_str;
}

bool operator == (const String & st1, const String &st2)
{
    return (std::strcmp (st1.m_str, st2.m_str) == 0);
}

// Простой вывод String
std::ostream& operator << (std::ostream &os,const String &st)
{
    os << st.m_str;
    return os;
}
// Простой ввод String
std::istream& operator >> (std::istream &is,String &st)
{
    char temp [String::CINLIM];
    is.get (temp, String::CINLIM);
    if (is)
    {
        st = temp;
    }
    while (is && is.get() != '\n')
    {
        continue;
    }
    return is;
}
