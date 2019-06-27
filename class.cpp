//==================class.cpp========================
int classA(void)
{return 1;}
int classB(void)
{return 2;}
int classC(void)
{return 3;}
//=================divide into different class==============
int divide_class(int vol)
{
    int class_no=0;
    switch(vol)
    {
        case 1:
        class_no=classA();
        break;
        case 2:
        class_no=classB();
        break;
        case 3:
        class_no=classC();
        break;
        default:
        class_no=0;
    }
    return class_no;
}