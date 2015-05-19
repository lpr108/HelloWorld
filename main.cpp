#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

#define MAX_NAME    10

struct stShuiHuData
{
    int nRank;                  //排名
    int nFileOffset;            //在文件中的偏移
    char szName[MAX_NAME];      //名字
    char szNickName[MAX_NAME];  //绰号
};


typedef unsigned char byte;

// tool
class ToolXOR
{
public:
    ToolXOR()
    {
        m_bFirstKey = (byte)0xbb;
        m_bLeftKey = (byte)0xcc;
    }
    ~ToolXOR();
    
    void DoXor(byte* pBuf, int nSize);


private:
    byte m_bFirstKey;  
    byte m_bLeftKey;
};

void ToolXOR::DoXor(byte* pBuf, int nSize)
{
    if (!pBuf || !pBuf[0])
    {
        return ;
    }

    int nLeftSize = nSize - 100;
    // first 100 byte
    for (int i = 0; i < 100 ; i++)
    {
        pBuf[i] ^= m_bFirstKey;
    }

    // second left byte
    if (nLeftSize > 0)
    {
    }
}


void main(void) 
{ 
    printf("Hello\n");
    getchar();
    getchar();
}
