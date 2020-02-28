//==================test class.cpp========================
int classtestA(void)
{return 1;}
int classtestB(void)
{return 2;}
int classtestC(void)
{return 3;}
//=================divide into different class==============
int divide_testclass(int vol)
{
    int class_no=0;
    switch(vol)
    {
        case 1:
        class_no=classtestA();
        break;
        case 2:
        class_no=classtestB();
        break;
        case 3:
        class_no=classtestC();
        break;
        default:
        class_no=0;
    }
    return class_no;
}