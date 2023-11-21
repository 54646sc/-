#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char xingm[11];
    char shfzh[21];
    int xh_ts;
}shq_t;
int heli(shq_t* p_sq,int * p_zk,int xh);
int s_sz(int n,char *s);
int bs_sz(char);
void sc(shq_t *);
void jiaru(int *,shq_t[],shq_t*);
void shuchu(int ,shq_t[]);
void paixu(int ,shq_t[],int);
int bijiao(const void *,const void*);
void fafang(int *,shq_t[],int ,shq_t[],int);
int keyiling(int *,shq_t[],shq_t*);
int Compare(const void *,const void *);
int shaoyitian(int,shq_t[]);
void charu(int *,shq_t[],shq_t*);
void jiaohuan(shq_t*,shq_t*);

int main()
{
    int ts,jg;
    scanf("%d%d",&ts,&jg);
    shq_t yzz[ts*1000];
    int yzz_rs=0;
    shq_t lqjl[ts*1000];
    int lq_rs =0;
    while(ts-->0)
    {
        shaoyitian(lq_rs,lqjl);
        int sqs,kzs;
        scanf("%d%d",&sqs,&kzs);
        shq_t s1[sqs];
        int s1_rs = 0;
        int xh;
        for(xh=0;xh<sqs;xh++)
        {
            shq_t sq;
            int zk;
            if(heli(&sq,&zk,xh))
            {
                if(zk==1)
                {
                    jiaru(&yzz_rs,yzz,&sq);
                }
                s1[s1_rs++]=sq;
            }
        }
        paixu(s1_rs,s1,jg);
        fafang(&lq_rs,lqjl,s1_rs,s1,kzs);
    }
    shuchu(yzz_rs,yzz);
    return 0;
}

void jiaohuan(shq_t* p,shq_t* q)
{
    shq_t t= *p;
    *p=*q;
    *q= t;
}
void charu(int *p_n,shq_t a[],shq_t* p_x)
{
    a[(*p_n)++]=*p_x;
    int i;
    for(i=*p_n-1;i>0;i--)
    {
        if(strcmp((a+i)->shfzh,(a+i-1)->shfzh)>0)
        {
            return ;
        }
        jiaohuan(a+i,a+i-1);
    }
}
int shaoyitian(int n,shq_t a[])
{
    while(n-->0)
    {
        a++ ->xh_ts--;
    }
}
int Compare(const void *vk,const void *vt)
{
    const shq_t * k = vk , * t = vt;
    return strcmp(k->shfzh,t->shfzh);
}
int keyiling(int * p_rs,shq_t yl[],shq_t*p_dq)
{
    shq_t* wz = bsearch(p_dq,yl,*p_rs,sizeof * yl,Compare);
    if(wz!=NULL)
    {
        if(wz->xh_ts<0)
        {
            *wz=*p_dq;
            return 1;
        }
        return 0;
    }
    charu(p_rs,yl,p_dq);
    return 1;
}
void fafang(int *p_yl_rs,shq_t yl[],int s1_rs,shq_t s1[],int kzs)
{
    while(s1_rs>0&&kzs>0)
    {
        if(keyiling(p_yl_rs,yl,s1))
        {
            sc(s1);
            kzs--;
        }
        s1++;
        s1_rs--;
    }
}
void paixu(int s1_rs,shq_t s1[],int jg)
{
    qsort(s1,s1_rs,sizeof * s1,bijiao );
    while(s1_rs-->0)
    {
        s1++->xh_ts=jg;
    }
}
int bijiao(const void *vp,const void* vq)
{
    const shq_t * p = vp , * q = vq;
    return p->xh_ts-q->xh_ts;
}
void shuchu(int n,shq_t a[])
{
    while(n-->0)
    {
        sc(a++);
    }
}
void jiaru(int *p_rs,shq_t yzz[],shq_t* p_x)
{
    int i;
    for(i=0;i<*p_rs;i++)
    {
        if(strcmp(p_x->shfzh,yzz[i].shfzh)==0)
        {
            return;
        }
    }
    yzz[(*p_rs)++]=*p_x;
}
void sc(shq_t *p)
{
    printf("%s %s\n",p->xingm,p->shfzh);
}
int bs_sz(char s)
{
    return s<'0'||s>'9';
}
int s_sz(int n,char *s)
{
    while(n-->0)
    {
        if(bs_sz(*s++))
        {
            return 0;
        }
    }
    return *s =='\0';
}

int heli(shq_t* p_sq,int *p_zk,int xh)
{
    scanf("%s%s",p_sq->xingm,p_sq->shfzh);
    scanf("%d",p_zk);
    int hh,mm;
    scanf("%d:%d",&hh,&mm);
    p_sq->xh_ts=hh;
    p_sq->xh_ts*=100;
    p_sq->xh_ts+=mm;
    p_sq->xh_ts *=1000;
    p_sq->xh_ts+=mm;
    return s_sz(18,p_sq->shfzh);
}
