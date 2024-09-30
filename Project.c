#include <stdio.h>
#include <string.h>
#include <time.h>
// STRUCTURE FOR BRANCH
typedef struct
{
    int brnch;       // BRANCH CODE
    char branch[50]; // BRANCH NAME
} Branch;
// STRUCTURE FOR COLLEGE
typedef struct
{
    int clg;          // COLLEGE CODE
    char college[50]; // COLLEGE NAME
} College;

//IIT BOMBAY
int iitb(int adv_rank, int br_code, int round)
{
    int choice_secured = 0;
   //ROUND 1
    if (round == 1)
    {
        if (br_code == 1) // CSE branch
        {
            if (adv_rank <= 66)
                choice_secured = 1;
        }
        else if (br_code == 5) // EE OR EEE
        {
            if (adv_rank <= 463)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 1691)
                choice_secured = 1;
        }
        else if (br_code == 7) // CH
        {
            if (adv_rank <= 2605)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 4134)
                choice_secured = 1;
        }
        else if (br_code == 9) // MME
        {
            if (adv_rank <= 4428)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 2)
    {
       //ROUND 2
        if (br_code == 1) // CSE branch
        {
            if (adv_rank <= 67)
                choice_secured = 1;
        }
        else if (br_code == 5) //  EEE
        {
            if (adv_rank <= 469)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 1692)
                choice_secured = 1;
        }
        else if (br_code == 7) // CH
        {
            if (adv_rank <= 2642)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 4134)
                choice_secured = 1;
        }
        else if (br_code == 9) // MME
        {
            if (adv_rank <= 4511)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 3)
    {
       //ROUND 3
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 67)
                choice_secured = 1;
        }
        else if (br_code == 5) //  EEE
        {
            if (adv_rank <= 469)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 1692)
                choice_secured = 1;
        }
        else if (br_code == 7) // CH
        {
            if (adv_rank <= 2642)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 4209)
                choice_secured = 1;
        }
        else if (br_code == 9) // MME
        {
            if (adv_rank <= 4511)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 4)
    {
       //ROUND 4
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 67)
                choice_secured = 1;
        }

        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 469)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 1692)
                choice_secured = 1;
        }
        else if (br_code == 7) // CH
        {
            if (adv_rank <= 2642)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 4209)
                choice_secured = 1;
        }
        else if (br_code == 9) // MME
        {
            if (adv_rank <= 4627)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 5)
    {
       //ROUND 5
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 67)
                choice_secured = 1;
        }

        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 469)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 1715)
                choice_secured = 1;
        }
        else if (br_code == 7) // CH
        {
            if (adv_rank <= 2693)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 4237)
                choice_secured = 1;
        }
        else if (br_code == 9) // MME
        {
            if (adv_rank <= 4627)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 6)
    {
       //ROUND 6
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 67)
                choice_secured = 1;
        }
        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 481)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 1736)
                choice_secured = 1;
        }
        else if (br_code == 7) // CH
        {
            if (adv_rank <= 2824)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 4371)
                choice_secured = 1;
        }
        else if (br_code == 9) // MME
        {
            if (adv_rank <= 4649)
                choice_secured = 1;
        }
        return choice_secured;
    }
}
//IIT KANPUR
int iitk(int adv_rank, int br_code, int round)
{
    int choice_secured = 0;
   //ROUND 1
    if (round == 1)
    {
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 215)
                choice_secured = 1;
        }
        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 1305)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 2844)
                choice_secured = 1;
        }
        else if (br_code == 7) // CH
        {
            if (adv_rank <= 4097)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 5933)
                choice_secured = 1;
        }
        else if (br_code == 9) // MME
        {
            if (adv_rank <= 6405)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 2)
    {
       //ROUND 2
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 224)
                choice_secured = 1;
        }
        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 1305)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 2879)
                choice_secured = 1;
        }
        else if (br_code == 7) // CH
        {
            if (adv_rank <= 4207)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 5999)
                choice_secured = 1;
        }
        else if (br_code == 9) // MME
        {
            if (adv_rank <= 6580)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 3)
    {
       //ROUND 3
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 224)
                choice_secured = 1;
        }
        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 1305)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 2879)
                choice_secured = 1;
        }
        else if (br_code == 7) // CH
        {
            if (adv_rank <= 4208)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 5999)
                choice_secured = 1;
        }
        else if (br_code == 9) // MME
        {
            if (adv_rank <= 6580)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 4)
    {
       //ROUND 4
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 224)
                choice_secured = 1;
        }

        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 1305)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 2879)
                choice_secured = 1;
        }
        else if (br_code == 7) // CH
        {
            if (adv_rank <= 4208)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 5999)
                choice_secured = 1;
        }
        else if (br_code == 9) // MME
        {
            if (adv_rank <= 6637)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 5)
    {
       //ROUND 5
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 224)
                choice_secured = 1;
        }

        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 1305)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 2879)
                choice_secured = 1;
        }
        else if (br_code == 7) // CH
        {
            if (adv_rank <= 4208)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 5999)
                choice_secured = 1;
        }
        else if (br_code == 9) // MME
        {
            if (adv_rank <= 6647)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 6)
    {
       //ROUND 6
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 238)
                choice_secured = 1;
        }
        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 1349)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 2940)
                choice_secured = 1;
        }
        else if (br_code == 7) // CH
        {
            if (adv_rank <= 4344)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 6116)
                choice_secured = 1;
        }
        else if (br_code == 9) // MME
        {
            if (adv_rank <= 6939)
                choice_secured = 1;
        }
        return choice_secured;
    }
}
// IIT MADRAS
int iitm(int adv_rank, int br_code, int round)
{
    int choice_secured = 0;
    if (round == 1)
    {
       //ROUND 1
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 144)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 908) // EEE
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 2509)
                choice_secured = 1;
        }
        else if (br_code == 7) // CH
        {
            if (adv_rank <= 4291)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 5880)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 2)
    {
       //ROUND 2
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 148)
                choice_secured = 1;
        }
        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 935)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 2522)
                choice_secured = 1;
        }
        else if (br_code == 7) // CH
        {
            if (adv_rank <= 4344)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 6066)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 3)
    {
       //ROUND 3
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 148)
                choice_secured = 1;
        }
        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 935)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 2677)
                choice_secured = 1;
        }
        else if (br_code == 7)// CH
        {
            if (adv_rank <= 4344)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 6077)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 4)
    {
       //ROUND 4
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 148)
                choice_secured = 1;
        }
        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 935)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 2530)
                choice_secured = 1;
        }
        else if (br_code == 7)// CH
        {
            if (adv_rank <= 4344)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 6106)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 5)
    {
       //ROUND 5
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 148)
                choice_secured = 1;
        }
        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 935)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 2536)
                choice_secured = 1;
        }
        else if (br_code == 7)// CH
        {
            if (adv_rank <= 4344)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 6106)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 6)
    {
       //ROUND 6
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 148)
                choice_secured = 1;
        }
        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 964)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 2572)
                choice_secured = 1;
        }
        else if (br_code == 7)// CH
        {
            if (adv_rank <= 4439)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 6132)
                choice_secured = 1;
        }
        return choice_secured;
    }
}
// IIT DELHI
int iitd(int adv_rank, int br_code, int round)
{
    int choice_secured = 0;
    if (round == 1)
    {
       //ROUND 1
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 115)
                choice_secured = 1;
        }
        else if (br_code == 3) // MNC
        {
            if (adv_rank <= 350)
                choice_secured = 1;
        }
        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 576)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 1757)
                choice_secured = 1;
        }
        else if (br_code == 7)// CH
        {
            if (adv_rank <= 2361)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 4237)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 2)
    {
       //ROUND 2
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 118)
                choice_secured = 1;
        }
        else if (br_code == 3) // MNC
        {
            if (adv_rank <= 350)
                choice_secured = 1;
        }
        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 576)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 1768)
                choice_secured = 1;
        }
        else if (br_code == 7)// CH
        {
            if (adv_rank <= 2361)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 4308)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 3)
    {
       //ROUND 3
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 118)
                choice_secured = 1;
        }
        else if (br_code == 3) // MNC
        {
            if (adv_rank <= 350)
                choice_secured = 1;
        }
        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 576)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 1768)
                choice_secured = 1;
        }
        else if (br_code == 7)// CH
        {
            if (adv_rank <= 2361)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 4309)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 4)
    {
       //ROUND 4
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 118)
                choice_secured = 1;
        }
        else if (br_code == 3) // MNC
        {
            if (adv_rank <= 350)
                choice_secured = 1;
        }
        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 576)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 1768)
                choice_secured = 1;
        }
        else if (br_code == 7)// CH
        {
            if (adv_rank <= 2361)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 4309)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 5)
    {
       //ROUND 5
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 118)
                choice_secured = 1;
        }
        else if (br_code == 3) // MNC
        {
            if (adv_rank <= 350)
                choice_secured = 1;
        }
        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 576)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 1768)
                choice_secured = 1;
        }
        else if (br_code == 7)// CH
        {
            if (adv_rank <= 2361)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 4313)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 6)
    {
       //ROUND 6
        if (br_code == 1)
        { // CSE branch
            if (adv_rank <= 118)
                choice_secured = 1;
        }
        else if (br_code == 3) // MNC
        {
            if (adv_rank <= 352)
                choice_secured = 1;
        }
        else if (br_code == 5) // EEE
        {
            if (adv_rank <= 582)
                choice_secured = 1;
        }
        else if (br_code == 6) // ME
        {
            if (adv_rank <= 1791)
                choice_secured = 1;
        }
        else if (br_code == 7)// CH
        {
            if (adv_rank <= 2365)
                choice_secured = 1;
        }
        else if (br_code == 8) // CE
        {
            if (adv_rank <= 4472)
                choice_secured = 1;
        }
        return choice_secured;
    }
}
// IIT ROORKEE
int iitr(int adv_rank, int br_code, int round)
{
    int choice_secured = 0;
    if (round == 1)
    {
       //ROUND 1
        if (br_code == 1)   //CS
        { 
            if (adv_rank <= 396)  
                choice_secured = 1;
        }
        else if (br_code == 2)   //AI
        {
            if (adv_rank <= 687)
                choice_secured = 1;
        }
        else if (br_code == 3)  //MNC
	{
            if (adv_rank <= 1519)
                choice_secured = 1;
        }
        else if (br_code == 4)  //ECE
	{
            if (adv_rank <= 1382)
                choice_secured = 1;
        }
        else if (br_code == 5)    //EE
        {
            if (adv_rank <= 1963)
                choice_secured = 1;
        }
        else if (br_code == 6)    //ME
        {
            if (adv_rank <= 3570)
                choice_secured = 1;
        }
        else if (br_code == 7)    //CB
        {
            if (adv_rank <= 4840)
                choice_secured = 1;
        }
        else if (br_code == 8)    //CE
        {
            if (adv_rank <= 6777)
                choice_secured = 1;
        }
        else if (br_code == 9)    //MME
        {
            if (adv_rank <= 7209)
                choice_secured = 1;
        }

        return choice_secured;
    }
    if (round == 2)
    {
       //ROUND 2
        if (br_code == 1) 
        { 
            if (adv_rank <= 405)
                choice_secured = 1;
        }
        else if (br_code == 2)  
        {
            if (adv_rank <= 691)
                choice_secured = 1;
        }
        else if (br_code == 3)  
        {
            if (adv_rank <= 1519)
                choice_secured = 1;
        }
        else if (br_code == 4)
        {
            if (adv_rank <= 1392)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 1996)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 3641)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 4886)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 6895)
                choice_secured = 1;
        }
        else if (br_code == 9)
        {
            if (adv_rank <= 7325)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 3)
    {
       //ROUND 3
        if (br_code == 1)
        { 
            if (adv_rank <= 405)
                choice_secured = 1;
        }
        else if (br_code == 2)
        {
            if (adv_rank <= 691)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 1519)
                choice_secured = 1;
        }
        else if (br_code == 4)
        {
            if (adv_rank <= 1392)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 1996)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 3656)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 4901)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 6895)
                choice_secured = 1;
        }
        else if (br_code == 9)
        {
            if (adv_rank <= 7325)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 4)
    {
       //ROUND 4
        if (br_code == 1)
        { 
            if (adv_rank <= 405)
                choice_secured = 1;
        }
        else if (br_code == 2)
        {
            if (adv_rank <= 691)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 1519)
                choice_secured = 1;
        }
        else if (br_code == 4)
        {
            if (adv_rank <= 1392)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 1996)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 3656)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 4914)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 6895)
                choice_secured = 1;
        }
        else if (br_code == 9)
        {
            if (adv_rank <= 7327)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 5)
    {
       //ROUND 5
        if (br_code == 1)
        { 
            if (adv_rank <= 406)
                choice_secured = 1;
        }
        else if (br_code == 2)
        {
            if (adv_rank <= 691)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 1523)
                choice_secured = 1;
        }
        else if (br_code == 4)
        {
            if (adv_rank <= 1396)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 1996)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 3656)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 4914)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 6898)
                choice_secured = 1;
        }
        else if (br_code == 9)
        {
            if (adv_rank <= 7379)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 6)
    {
       //ROUND 6
        if (br_code == 1)
        { 
            if (adv_rank <= 412)
                choice_secured = 1;
        }
        else if (br_code == 2)
        {
            if (adv_rank <= 715)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 1523)
                choice_secured = 1;
        }
        else if (br_code == 4)
        {
            if (adv_rank <= 1429)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 2037)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 3854)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 5015)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 7100)
                choice_secured = 1;
        }
        else if (br_code == 9)
        {
            if (adv_rank <= 7945)
                choice_secured = 1;
        }
        return choice_secured;
    }
}
// IIT KHARAGPUR
int iitkgp(int adv_rank, int br_code, int round)
{
    int choice_secured = 0;
    if (round == 1)
    {
       //ROUND 1
        if (br_code == 1)   //CS
        { 
            if (adv_rank <= 261)
                choice_secured = 1;
        }
        else if (br_code == 3)   //MNC
        {
            if (adv_rank <= 1353)
                choice_secured = 1;
        }
        else if (br_code == 4)   //ECE
        {
            if (adv_rank <= 1144)
                choice_secured = 1;
        }
        else if (br_code == 5)   //EE
        {
            if (adv_rank <= 1723)
                choice_secured = 1;
        }
        else if (br_code == 6)  //ME
        {
            if (adv_rank <= 3120)
                choice_secured = 1;
        }
        else if (br_code == 7)  //CB
        {
            if (adv_rank <= 4605)
                choice_secured = 1;
        }
        else if (br_code == 8)  //CE
        {
            if (adv_rank <= 6442)
                choice_secured = 1;
        }
        else if (br_code == 9)   //MME
        {
            if (adv_rank <= 6738)
                choice_secured = 1;
        }

        return choice_secured;
    }
    if (round == 2)
    {
       //ROUND 2
        if (br_code == 1)
        { 
            if (adv_rank <= 277)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 1353)
                choice_secured = 1;
        }
        else if (br_code == 4)
        {
            if (adv_rank <= 1156)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 1723)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 3216)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 4656)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 6637)
                choice_secured = 1;
        }
        else if (br_code == 9)
        {
            if (adv_rank <= 7010)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 3)
    {
       //ROUND 3
        if (br_code == 1)
        { 
            if (adv_rank <= 277)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 1353)
                choice_secured = 1;
        }
        else if (br_code == 4)
        {
            if (adv_rank <= 1156)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 1723)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 3242)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 4662)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 6657)
                choice_secured = 1;
        }
        else if (br_code == 9)
        {
            if (adv_rank <= 7010)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 4)
    {
       //ROUND 4
        if (br_code == 1)
        { 
            if (adv_rank <= 277)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 1353)
                choice_secured = 1;
        }
        else if (br_code == 4)
        {
            if (adv_rank <= 1156)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 1723)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 3242)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 4663)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 6666)
                choice_secured = 1;
        }
        else if (br_code == 9)
        {
            if (adv_rank <= 7066)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 5)
    {
       //ROUND 5
        if (br_code == 1)
        { 
            if (adv_rank <= 277)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 1353)
                choice_secured = 1;
        }
        else if (br_code == 4)
        {
            if (adv_rank <= 1156)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 1723)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 3248)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 4665)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 6734)
                choice_secured = 1;
        }
        else if (br_code == 9)
        {
            if (adv_rank <= 7137)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 6)
    {
       //ROUND 6
        if (br_code == 1)
        { 
            if (adv_rank <= 279)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 1416)
                choice_secured = 1;
        }
        else if (br_code == 4)
        {
            if (adv_rank <= 1205)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 1833)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 3918)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 4944)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 7177)
                choice_secured = 1;
        }
        else if (br_code == 9)
        {
            if (adv_rank <= 7325)
                choice_secured = 1;
        }
        return choice_secured;
    }
}
// IIT GUWAHATI
int iitg(int adv_rank, int br_code, int round)
{
    int choice_secured = 0;
    if (round == 1)
    {
       //ROUND 1
        if (br_code == 1)   //CS
        { 
            if (adv_rank <= 601)
                choice_secured = 1;
        }
        else if (br_code == 2)  //AI
        {
            if (adv_rank <= 974)
                choice_secured = 1;
        }  
        else if (br_code == 3)   //MNC
        {
            if (adv_rank <= 1076)
                choice_secured = 1;
        }
        else if (br_code == 4)   //ECE
        {
            if (adv_rank <= 1597)
                choice_secured = 1;
        }
        else if (br_code == 5)   //EE
        {
            if (adv_rank <= 2056)
                choice_secured = 1;
        }
        else if (br_code == 6)    //ME
        {
            if (adv_rank <= 4251)
                choice_secured = 1;
        }
        else if (br_code == 7)   //CB
        {
            if (adv_rank <= 5511)
                choice_secured = 1;
        }
        else if (br_code == 8)   //CE
        {
            if (adv_rank <= 7399)
                choice_secured = 1;
        }

        return choice_secured;
    }
    if (round == 2)
    {
       //ROUND 2
        if (br_code == 1)
        { 
            if (adv_rank <= 611)
                choice_secured = 1;
        }
        else if (br_code == 2)
        {
            if (adv_rank <= 993)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 1079)
                choice_secured = 1;
        }
        else if (br_code == 4)
        {
            if (adv_rank <= 1606)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 2056)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 4369)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 5554)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 7751)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 3)
    {
       //ROUND 3
        if (br_code == 1)
        { 
            if (adv_rank <= 611)
                choice_secured = 1;
        }
        else if (br_code == 2)
        {
            if (adv_rank <= 993)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 1079)
                choice_secured = 1;
        }
        else if (br_code == 4)
        {
            if (adv_rank <= 1606)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 2056)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 4372)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 5554)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 8083)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 4)
    {
       //ROUND 4
        if (br_code == 1)
        { 
            if (adv_rank <= 611)
                choice_secured = 1;
        }
        else if (br_code == 2)
        {
            if (adv_rank <= 993)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 1079)
                choice_secured = 1;
        }
        else if (br_code == 4)
        {
            if (adv_rank <= 1606)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 2056)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 4372)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 5554)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 7766)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 5)
    {
       //ROUND 5
        if (br_code == 1)
        { 
            if (adv_rank <= 614)
                choice_secured = 1;
        }
        else if (br_code == 2)
        {
            if (adv_rank <= 996)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 1091)
                choice_secured = 1;
        }
        else if (br_code == 4)
        {
            if (adv_rank <= 1630)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 2059)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 4372)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 5554)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 7806)
                choice_secured = 1;
        }
        return choice_secured;
    }
    if (round == 6)
    {
       //ROUND 6
        if (br_code == 1)
        { 
            if (adv_rank <= 654)
                choice_secured = 1;
        }
        else if (br_code == 2)
        {
            if (adv_rank <= 1027)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 1124)
                choice_secured = 1;
        }
        else if (br_code == 4)
        {
            if (adv_rank <= 1698)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 2117)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 4754)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 5959)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 8413)
                choice_secured = 1;
        }
        return choice_secured;
    }
}
// IIT PATNA
int iitp(int adv_rank, int br_code, int round)
{   
    int choice_secured = 0;
    if (round = 1)
    {
       //ROUND 1
        if (br_code == 1) //CS
        { 
            if (adv_rank <= 2612)
                choice_secured = 1;
        }
        else if (br_code == 2) //AI
        {
            if (adv_rank <= 3313)
                choice_secured = 1;
        }
        else if (br_code == 3) //MNC
        {
            if (adv_rank <= 4534)
                choice_secured = 1;
        }
        else if (br_code == 5)  //EE
        {
            if (adv_rank <= 5319)
                choice_secured = 1;
        }
        else if (br_code == 6)  //ME
        {
            if (adv_rank <= 10086)
                choice_secured = 1;
        }
        else if (br_code == 7)  //CB
        {
            if (adv_rank <= 11674)
                choice_secured = 1;
        }
        else if (br_code == 8)  //CE
        {
            if (adv_rank <= 13601)
                choice_secured = 1;
        }
        else if (br_code == 9)   //MME
        {
            if (adv_rank <= 14246)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 2)
    {
       //ROUND 2
        if (br_code == 1)
        { 
            if (adv_rank <= 2720)
                choice_secured = 1;
        }
        else if (br_code == 2)
        {
            if (adv_rank <= 3352)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 4612)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 6640)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 10532)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 12333)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 13698)
                choice_secured = 1;
        }
        else if (br_code == 9)
        {
            if (adv_rank <= 14925)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 3)
    {
       //ROUND 3
        if (br_code == 1)
        { 
            if (adv_rank <= 2722)
                choice_secured = 1;
        }
        else if (br_code == 2)
        {
            if (adv_rank <= 3399)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 4612)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 6695)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 10532)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 12407)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 13709)
                choice_secured = 1;
        }
        else if (br_code == 9)
        {
            if (adv_rank <= 15066)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 4)
    {
       //ROUND 4
        if (br_code == 1)
        { 
            if (adv_rank <= 2722)
                choice_secured = 1;
        }
        else if (br_code == 2)
        {
            if (adv_rank <= 3399)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 4612)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 6695)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 10532)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 12407)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 13712)
                choice_secured = 1;
        }
        else if (br_code == 9)
        {
            if (adv_rank <= 15135)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 5)
    {
       //ROUND 5
        if (br_code == 1)
        { 
            if (adv_rank <= 2722)
                choice_secured = 1;
        }
        else if (br_code == 2)
        {
            if (adv_rank <= 3399)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 4612)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 6695)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 10562)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 12478)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 13712)
                choice_secured = 1;
        }
        else if (br_code == 9)
        {
            if (adv_rank <= 15135)
                choice_secured = 1;
        }
        return choice_secured;
    }
    else if (round == 6)
    {
       //ROUND 6
        if (br_code == 1)
        { 
            if (adv_rank <= 2811)
                choice_secured = 1;
        }
        else if (br_code == 2)
        {
            if (adv_rank <= 3577)
                choice_secured = 1;
        }
        else if (br_code == 3)
        {
            if (adv_rank <= 4749)
                choice_secured = 1;
        }
        else if (br_code == 5)
        {
            if (adv_rank <= 7359)
                choice_secured = 1;
        }
        else if (br_code == 6)
        {
            if (adv_rank <= 11453)
                choice_secured = 1;
        }
        else if (br_code == 7)
        {
            if (adv_rank <= 13933)
                choice_secured = 1;
        }
        else if (br_code == 8)
        {
            if (adv_rank <= 15295)
                choice_secured = 1;
        }
        else if (br_code == 9)
        {
            if (adv_rank <= 16253)
                choice_secured = 1;
        }
        return choice_secured;
    }
}
void pause(int msecs)
{
    struct timespec period;
    period.tv_sec = msecs / 1000;
    period.tv_nsec = (msecs % 1000) * 1000000;
    nanosleep(&period, NULL);
}

void printer(int text_chooser)
{
    char *info_text;
    if (text_chooser == 1)
        info_text = "*******JOINT SEAT ALLOCATION AUTHORITY (JoSAA) COUNSELLING : 2023*******";
    else if (text_chooser == 2)
        info_text = "For Choosing Institute, Enter:\n1 for IIT Bombay \n2 for IIT Delhi \n3 for IIT Madras \n4 for IIT Kanpur \n5 for IIT Roorkee \n6 for IIT Kharagpur \n7 for IIT Guwahati \n8 for IIT Patna \n\n";
    else
        info_text = "For Choosing Branch, Enter: \n1 for Computer Science Engineering \n2 for Artificial intelligence and Data Science \n3 for Mathematics and Computing \n4 for Electronics and Communication Engineering \n5 for Electrical Engineering \n6 for Mechanical Engineering \n7 for Chemical Engineering \n8 for Civil Engineering \n9 for Metalurgical and Materials Engineering\n\n";
    int pause_time; // Pause time in milliseconds (100 milliseconds = 0.1 seconds)
    if(text_chooser==1)
    {
        pause_time=40;
    }
    else pause_time=25;
    int i = 0;
    while (info_text[i] != '\0')
    {
        putchar(info_text[i]);
        fflush(stdout);           // Flush the output to ensure the chadv_rankacter is printed immediately (by emptying the buffer associated with the std. o/p stream)
        pause(pause_time); // Pause time between printing of chadv_rankacters
        i++;
    }
}
int main()
{
    printer(1);
    printf("\n");
    int adv_rank; // advance rank;
    char achieved_clg[7][50], achieved_brnch[7][50];
    strcpy(achieved_brnch[0], "");
    strcpy(achieved_clg[0], "");
    printf("\nEnter Rank in JEE Advance: \n");
    scanf("%d", &adv_rank);
    int n; // no. of choices;
    printf("\nEnter no. of choices: ");
    scanf("%d", &n);
    int found = 0;
    int round = 1;
    int rejecter[50];
    int code_clg_rvd[7] = {0, 0, 0, 0, 0, 0, 0}, code_brnch_rvd[7] = {0, 0, 0, 0, 0, 0, 0};
    College clg_list[50];
    Branch brnch_list[50];
    printf("GENERAL GUIDELINES FOR FILLING OF CHOICES:-\n");
    //printf("For Choosing Institue, Enter:\n1 for IIT Bombay \n2 for IIT Delhi \n3 for IIT Madras \n4 for IIT Kanpur \n5 for IIT Roorkee \n6 for IIT Kharagpur \n7 for IIT Guwahati \n8 for IIT Patna \n\n");
    //printf("For Choosing Branch, Enter: \n1 for Computer Science Engineering \n2 for artificial intelligence and Data Science \n3 for Mathematics and Computing \n4 for Electronics and Communication Engineering \n5 for Electrical Engineering \n6 for Mechanical Engineering \n7 for Chemcial Engineering \n8 for Civil Engineering \n9 for Metalurgical and Materials Engineering\n\n");
     printer(2);
     printer(3);
    for (int i = 0; i < n; i++)
    {
        int checker = 0;
        printf("Choice Number: %d\n", i + 1);
        printf("Enter Institute Name and it's Code: \n");
        scanf("%s", clg_list[i].college);
        scanf("%d", &clg_list[i].clg);
        printf("Enter Branch and it's Code: \n");
        scanf("%s", brnch_list[i].branch);
        scanf("%d", &brnch_list[i].brnch);
        switch (clg_list[i].clg)
        {
        case 1: // IIT BOMBAY
        {
            checker = iitb(adv_rank, brnch_list[i].brnch, 1);
            break;
        }
        case 2: // IIT DELHI
        {
            checker = iitd(adv_rank, brnch_list[i].brnch, 1);
            break;
        }
        case 3: // IIT MADRAS
        {
            checker = iitm(adv_rank, brnch_list[i].brnch, 1);
            break;
        }
        case 4: // IIT KANPUR
        {
            checker = iitk(adv_rank, brnch_list[i].brnch, 1);
            break;
        }
        case 5: // IIT ROORKEE
        {
            checker = iitr(adv_rank, brnch_list[i].brnch, 1);
            break;
        }
        case 6: // IIT KHARAGPUR
        {
            checker = iitkgp(adv_rank, brnch_list[i].brnch, 1);
            break;
        }
        case 7: // IIT GUWAHATI
        {
            checker = iitg(adv_rank, brnch_list[i].brnch, 1);
            break;
        }
        case 8: // IIT PATNA
        {
            checker = iitp(adv_rank, brnch_list[i].brnch, 1);
            break;
        }
        default:
        {
            printf("TRY IN NEXT ROUND :/ \n");//not needed as if such an institute code does not exist in the list then we can never find it and so later on try next round will be shown anyhow... if all you plug in is an invalid institute then how to deal with that?
        }
        }
        if (checker == 1 && !found)
        {
            strcpy(achieved_clg[1], clg_list[i].college);
            strcpy(achieved_brnch[1], brnch_list[i].branch);
            code_clg_rvd[1] = clg_list[i].clg;
            code_brnch_rvd [1] = brnch_list[i].brnch;
            found = 1;
            rejecter[2] = i;
        }
    }
    printf("\nROUND 1 \n");
    if (found)
    {
        printf("%s \n", achieved_clg[1]);
        printf("%s \n", achieved_brnch[1]);
        printf("\n");
    }
    else
    {
        printf("Try in next round :/ \n");
        printf("\n");
        strcpy(achieved_clg[1], clg_list[n - 1].college);
        strcpy(achieved_brnch[1], brnch_list[n - 1].branch);
        code_clg_rvd[1] = clg_list[n - 1].clg;
        code_brnch_rvd[1] = brnch_list[n - 1].brnch;
        rejecter[2] = n - 1;
    }
    round = 2;
    int freezed = 0;
    while (round <= 6)
    {
        printf("ROUND %d \n", round);
        int choice;
        if (found == 1)
        {
            printf("Enter 1 for Slide \n 2 for Float \n 3 for Freeze \n");
            scanf("%d", &choice);
        }
        else
        {
            choice = 2;
        }
        if (choice == 1)
        {
            int checker = 0;
            for (int i = 0; i <= rejecter[round]; i++)
            {
                if (clg_list[i].clg == code_clg_rvd[round - 1])
                {
                    int v = clg_list[i].clg;
                    if (v == 1)
                    {
                        checker = iitb(adv_rank, brnch_list[i].brnch, round);
                    }
                    if (v == 2)
                    {
                        checker = iitd(adv_rank, brnch_list[i].brnch, round);
                    }
                    if (v == 3)
                    {
                        checker = iitm(adv_rank, brnch_list[i].brnch, round);
                    }
                    if (v == 4)
                    {
                        checker = iitk(adv_rank, brnch_list[i].brnch, round);
                    }
                    if (v == 5)
                    {
                        checker = iitr(adv_rank, brnch_list[i].brnch, round);
                    }
                    if (v == 6)
                    {
                        checker = iitkgp(adv_rank, brnch_list[i].brnch, round);
                    }
                    if (v == 7)
                    {
                        checker = iitg(adv_rank, brnch_list[i].brnch, round);
                    }
                    if (v == 8)
                    {
                        checker = iitp(adv_rank, brnch_list[i].brnch, round);
                    }
                    
                }
                if (checker == 1)
                {
                    strcpy(achieved_clg[round], clg_list[i].college);
                    strcpy(achieved_brnch[round], brnch_list[i].branch);
                    code_clg_rvd[round] = clg_list[i].clg;
                    code_brnch_rvd[round] = brnch_list[i].brnch;
                    found = 1;
                    rejecter[round + 1] = i;
                    break;
                }
            }
        }
        else if (choice == 2)
        {
            int checker = 0;
            for (int i = 0; i <= rejecter[round]; i++)
            {
                int v = clg_list[i].clg;
                if (v == 1)
                {
                    checker = iitb(adv_rank, brnch_list[i].brnch, round);
                }
                if (v == 2)
                {
                    checker = iitd(adv_rank, brnch_list[i].brnch, round);
                }
                if (v == 3)
                {
                    checker = iitm(adv_rank, brnch_list[i].brnch, round);
                }
                if (v == 4)
                {
                    checker = iitk(adv_rank, brnch_list[i].brnch, round);
                }
                if (v == 5)
                {
                    checker = iitr(adv_rank, brnch_list[i].brnch, round);
                }
                if (v == 6)
                {
                    checker = iitkgp(adv_rank, brnch_list[i].brnch, round);
                }
                if (v == 7)
                {
                    checker = iitg(adv_rank, brnch_list[i].brnch, round);
                }
                if (v == 8)
                {
                    checker = iitp(adv_rank, brnch_list[i].brnch, round);
                }
               
                if (checker == 1)
                {
                    strcpy(achieved_clg[round], clg_list[i].college);
                    strcpy(achieved_brnch[round], brnch_list[i].branch);
                    code_clg_rvd[round] = clg_list[i].clg;
                    code_brnch_rvd[round] = brnch_list[i].brnch;
                    found = 1;
                    rejecter[round + 1] = i;
                    break;
                }
            }
        }
        else if (choice == 3)
        {
            freezed = 1;
            break;
        }
        else
        {
            printf("Wrong choice :/ \n");
        }
        if (found)
        {
            printf("Round %d result : \n", round);
            printf("%s \n", achieved_clg[round]);
            printf("%s \n", achieved_brnch[round]);
            printf("\n");
        }
        else
        {
            if (!found && round != 6)
            {
                printf("Try in next round :/ \n");
                printf("\n");
            }
            if (!found && round == 6)
            {
                printf("Try next year :( \n");
                printf("\n");
            }
            strcpy(achieved_clg[round], clg_list[n - 1].college);
            strcpy(achieved_brnch[round], brnch_list[n - 1].branch);
            code_clg_rvd[round] = clg_list[n - 1].clg;
            code_brnch_rvd[round] = brnch_list[n - 1].brnch;
            rejecter[round + 1] = n - 1;
        }
        round++;
    }

    if (freezed)
    {
        int i = round;
        while (i <= 6)
        {
            printf("Round %d result : \n", i);
            printf("%s \n", achieved_clg[round - 1]);
            printf("%s \n", achieved_brnch[round - 1]);
            printf("\n");
            i++;
        }
    }
}
