#include"contact.h"
void add(F*p,int sz)
{
    if(sz<1000)
    {
        printf("���������֣�");
        scanf("%s",p[sz].name);
        printf("���������䣺");
        scanf("%s",p[sz].age);
        printf("�������Ա�");
        scanf("%s",p[sz].sex);
        printf("������绰��");
        scanf("%s",p[sz].tele);
        printf("�������ַ��");
        scanf("%s",p[sz].addr);
        printf("��ӳɹ�\n");
        Sleep(1000);
        system("cls");
        system("pause");
    }
    else
    {
        printf("ͨѶ¼����,�޷�����\n");
    }
}
void dell(F*p,int sz)
{
    char arr[NAME];
    int n;
    char arr5[5];
    while(1)
    {
    printf("������Ҫɾ�����˵�����");
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
        printf("������:%s\n",arr);
        printf("�Ƿ���������:");
        scanf("%s",arr5);
        if((strcmp(arr5,"��"))==0)
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
        printf("ɾ���ɹ�\n");
    }
    printf("1.ɾ����������Ϣ      2.�˳���ѯ");
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
        printf("ͨѶ¼Ϊ��\n");
        system("pause");
    }
    else
    {
        int i;
        printf("%-20s  %-4s  %-5s  %-12s  %-30s\n","����","����","�Ա�","�绰","סַ\n");
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
    printf("������Ҫ�޸���Ϣ���˵�����:");
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
        printf("������:%s\n",arr);
        printf("�Ƿ���������:");
        scanf("%s",arr5);
        if((strcmp(arr5,"��"))==0)
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
        printf("%-20s  %-4s  %-5s  %-12s  %-30s\n","����","����","�Ա�","�绰","סַ\n");
        while(1)
        {
            printf("��������Ҫ�޸ĵ���Ϣ����:");
            scanf("%s",arr2);
            if((strcmp(arr2,"����"))==0)
           {
               printf("�������޸ĺ������:");
               scanf("%s",p[i].name);
               printf("�޸ĳɹ�\n");
           }
        else if((strcmp(arr2,"����"))==0)
           {
               printf("�������޸ĺ������:");
               scanf("%s",p[i].age);
               printf("�޸ĳɹ�\n");
           }
        else if((strcmp(arr2,"�Ա�"))==0)
           {
               printf("�������޸ĺ���Ա�:");
               scanf("%s",p[i].sex);
               printf("�޸ĳɹ�\n");
           }
        else if((strcmp(arr2,"�绰"))==0)
           {
               printf("�������޸ĺ�ĵ绰:");
               scanf("%s",p[i].tele);
               printf("�޸ĳɹ�\n");
           }
        else if((strcmp(arr2,"סַ"))==0)
           {
               printf("�������޸ĺ��סַ:");
               scanf("%s",p[i].addr);
               printf("�޸ĳɹ�\n");
           }
        else
           {
               printf("�������\n");
           }
        printf("1.�����޸ĸ���Ա��Ϣ     2.�޸���������Ϣ    3.�˳��޸�\n");
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
    printf("������Ҫɾ����Ϣ���˵�����:");
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
        printf("������:%s\n",arr);
        printf("�Ƿ���������:");
        scanf("%s",arr5);
        if((strcmp(arr5,"��"))==0)
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
        printf("%-20s  %-4s  %-5s  %-12s  %-30s\n","����","����","�Ա�","�绰","סַ\n");
        while(1)
        {
            printf("��������Ҫɾ������Ϣ����:");
            scanf("%s",arr2);
        if((strcmp(arr2,"����"))==0)
           {
               strcpy(p[i].name," ");
           }
        else if((strcmp(arr2,"����"))==0)
           {
               strcpy(p[i].age," ");
           }
        else if((strcmp(arr2,"�Ա�"))==0)
           {
               strcpy(p[i].age," ");
           }
        else if((strcmp(arr2,"�绰"))==0)
           {
              strcpy(p[i].tele," ");
           }
        else if((strcmp(arr2,"סַ"))==0)
           {
              strcpy(p[i].addr," ");
           }
        else
           {
               printf("�������\n");
           }
           printf("ɾ����Ϣ�ɹ�\n");
        printf("1.����ɾ������Ա��Ϣ   2.ɾ��������Ա��Ϣ    3.�˳�ɾ��\n");
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
    printf("������Ҫ��ѯ��Ϣ���˵�����");
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
        printf("������:%s\n",arr);
        printf("�Ƿ���������:");
        scanf("%s",arr5);
        if((strcmp(arr5,"��"))==0)
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
        printf("%-20s  %-4s  %-5s  %-12s  %-30s\n","����","����","�Ա�","�绰","סַ\n");
        printf("%-20s  %-4s  %-5s  %-12s  %-30s\n",p[i].name,p[i].age,p[i].sex,p[i].tele,p[i].addr);
    }
    printf("1.��ѯ��������Ϣ      2.�˳���ѯ\n");
    scanf("%d",&n);
    if(n==2)
        {
        system("cls");
        system("pause");
        break;
        }
    }
}
