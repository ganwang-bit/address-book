#include"contact.h"
void add(F*p,int sz)
{
    if(sz<1000)
    {
        printf("请输入名字：");
        scanf("%s",p[sz].name);
        printf("请输入年龄：");
        scanf("%s",p[sz].age);
        printf("请输入性别：");
        scanf("%s",p[sz].sex);
        printf("请输入电话：");
        scanf("%s",p[sz].tele);
        printf("请输入地址：");
        scanf("%s",p[sz].addr);
        printf("添加成功\n");
        Sleep(1000);
        system("cls");
        system("pause");
    }
    else
    {
        printf("通讯录已满,无法增加\n");
    }
}
void dell(F*p,int sz)
{
    char arr[NAME];
    int n;
    char arr5[5];
    while(1)
    {
    printf("请输入要删除的人的名字");
    scanf("%s",arr);
    int i=0;
    while(i<sz)
    {
        if((strcmp(arr,p[i].name))==0)
        {
            break;
        }
        i++;
    }
    if(i==sz)
    {
        printf("不存在:%s\n",arr);
        printf("是否重新输入:");
        scanf("%s",arr5);
        if((strcmp(arr5,"是"))==0)
              {
                  system("cls");
                  continue;
              }
        else
           {
               system("cls");
              break;
           }
    }
    else
    {
        while(i<sz-1)
        {
            p[i]=p[i+1];
        }
        printf("删除成功\n");
    }
    printf("1.删除其他人信息      2.退出查询");
    scanf("%d",&n);
    if(n==2)
        {
        system("cls");
        system("pause");
        break;
        }
    }
}
void print(F*p,int sz)
{
    if(sz==0)
    {
        printf("通讯录为空\n");
        system("pause");
    }
    else
    {
        int i;
        printf("%-20s  %-4s  %-5s  %-12s  %-30s\n","名字","年龄","性别","电话","住址\n");
        for(i=0;i<sz;i++)
        {
            printf("%-20s  %-4s  %-5s  %-12s  %-30s\n",p[i].name,p[i].age,p[i].sex,p[i].tele,p[i].addr);

        }
        system("pause");
        system("cls");
    }
}
void change(F*p,int sz)
{
    int n;
    char arr5[5];
    char arr2[30];
    char arr[NAME];
    while(1)
    {
    printf("请输入要修改信息的人的名字:");
    scanf("%s",arr);
    int i=0;
    while(i<sz)
    {
        if((strcmp(arr,p[i].name))==0)
        {
            break;
        }
        i++;
    }
    if(i==sz)
    {
        printf("不存在:%s\n",arr);
        printf("是否重新输入:");
        scanf("%s",arr5);
        if((strcmp(arr5,"是"))==0)
           {
               system("cls");
              continue;
           }
        else
            {
            system("cls");
            break;
            }
    }
    else
    {
        printf("%-20s  %-4s  %-5s  %-12s  %-30s\n","名字","年龄","性别","电话","住址\n");
        while(1)
        {
            printf("请输入想要修改的信息名称:");
            scanf("%s",arr2);
            if((strcmp(arr2,"名字"))==0)
           {
               printf("请输入修改后的名字:");
               scanf("%s",p[i].name);
               printf("修改成功\n");
           }
        else if((strcmp(arr2,"年龄"))==0)
           {
               printf("请输入修改后的年龄:");
               scanf("%s",p[i].age);
               printf("修改成功\n");
           }
        else if((strcmp(arr2,"性别"))==0)
           {
               printf("请输入修改后的性别:");
               scanf("%s",p[i].sex);
               printf("修改成功\n");
           }
        else if((strcmp(arr2,"电话"))==0)
           {
               printf("请输入修改后的电话:");
               scanf("%s",p[i].tele);
               printf("修改成功\n");
           }
        else if((strcmp(arr2,"住址"))==0)
           {
               printf("请输入修改后的住址:");
               scanf("%s",p[i].addr);
               printf("修改成功\n");
           }
        else
           {
               printf("输入错误\n");
           }
        printf("1.继续修改该人员信息     2.修改其他人信息    3.退出修改\n");
        scanf("%d",&n);
        if(n==2||3)
        {
            system("cls");
            break;
        }
        }
    }
    if(n==3)
    {
        break;
    }
    }
}
void del(F*p,int sz)
{
    int n;
    char arr[NAME];
    char arr5[5];
    char arr2[30];
    while(1)
    {
    printf("请输入要删除信息的人的名字:");
    scanf("%s",arr);
    int i=0;
    while(i<sz)
    {
        if((strcmp(arr,p[i].name))==0)
        {
            break;
        }
        i++;
    }
    if(i==sz)
    {
        printf("不存在:%s\n",arr);
        printf("是否重新输入:");
        scanf("%s",arr5);
        if((strcmp(arr5,"是"))==0)
            {
            system("cls");
            continue;
            }
        else
        {
            system("cls");
            break;
        }
    }
    else
    {
        printf("%-20s  %-4s  %-5s  %-12s  %-30s\n","名字","年龄","性别","电话","住址\n");
        while(1)
        {
            printf("请输入想要删除的信息名称:");
            scanf("%s",arr2);
        if((strcmp(arr2,"名字"))==0)
           {
               strcpy(p[i].name," ");
           }
        else if((strcmp(arr2,"年龄"))==0)
           {
               strcpy(p[i].age," ");
           }
        else if((strcmp(arr2,"性别"))==0)
           {
               strcpy(p[i].age," ");
           }
        else if((strcmp(arr2,"电话"))==0)
           {
              strcpy(p[i].tele," ");
           }
        else if((strcmp(arr2,"住址"))==0)
           {
              strcpy(p[i].addr," ");
           }
        else
           {
               printf("输入错误\n");
           }
           printf("删除信息成功\n");
        printf("1.继续删除该人员信息   2.删除其他人员信息    3.退出删除\n");
        scanf("%d",&n);
        if(n==2||3)
        {
            system("cls");
            system ("pause");
            break;
        }
        }
    }
    if(n==3)
    {
        break;
    }
    }
}
void search(F*p,int sz)
{
    char arr[NAME];
    int n;
    char arr5[5];
    while(1)
    {
    printf("请输入要查询信息的人的名字");
    scanf("%s",arr);
    int i=0;
    while(i<sz)
    {
        if((strcmp(arr,p[i].name))==0)
        {
            break;
        }
        i++;
    }
    if(i==sz)
    {
        printf("不存在:%s\n",arr);
        printf("是否重新输入:");
        scanf("%s",arr5);
        if((strcmp(arr5,"是"))==0)
              {
                  system("cls");
                  continue;
              }
        else
           {
               system("cls");
              break;
           }
    }
    else
    {
        printf("%-20s  %-4s  %-5s  %-12s  %-30s\n","名字","年龄","性别","电话","住址\n");
        printf("%-20s  %-4s  %-5s  %-12s  %-30s\n",p[i].name,p[i].age,p[i].sex,p[i].tele,p[i].addr);
    }
    printf("1.查询其他人信息      2.退出查询\n");
    scanf("%d",&n);
    if(n==2)
        {
        system("cls");
        system("pause");
        break;
        }
    }
}
