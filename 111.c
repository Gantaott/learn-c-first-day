#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//��ѧC����
//�������ļӷ�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d",&a ,&b);
//	sum=a+b;
//	printf("sum=%d\n",sum);
//
//	return 0;
//��10������ƽ��ֵ�����е�scanf����������\n����Ȼ��Ҫ����11����
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	float avg = sum / 10.0;
//	printf("avg=%.1f\n", avg);
//	return 0;
//}
// ̽Ѱ��δ�ӡ��С��0.5�����ҷ�����Ҫ������һ���������óɸ������磺10.0
//int main()
//{
//	int i = 5;
//	float j = i / 10.0;
//	printf("j=%.1f\n", j);
//	return 0;
//}
//̽Ѱ��ָ��Ѱ�������ַ��int* p = arr;Ĭ��ָ��ָ�������±�Ϊ0��λ�ã���Ҫָ������λ������Ҫ���Ϸ���&�磺int* p =& arr[2];
//main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d", * p);
//		p++;
//	}
//	return 0;
//}
//ѧϰ���Դ��룬�Ȱ�F10�������������ԣ����ڣ����ӣ����Ӵ��ڣ�ѡ��Ҫ���ӵĶ���,��һ�ΰ�F10�ǽ�����Ի�����
//�����е��Եģ�ָ���������ӵ�һ�а���˳��ִ����ȥ�ģ�ÿ��һ��F10ִ��һ�Σ����������ִ�е���Ҫ�жϵĽڵ�
// ��ֹͣ��������ҳ�棬����������룬�ᵯ������ҳ�������������ݣ���scanf�������������ѡ������һ������
// ����һ����ȫ�����꣬���س����Ա���Լ���ִ�У���Ϊ���F10�ĵ��Թ���ʵ���Ͼ���ÿ��һ��F10��ִ��һ��
// ���룬�������������ѡ�����Ӽ��Ӷ����Ա��������C���Դ������еĹ���
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	float avg = sum / 10.0;
//	printf("avg=%.1f\n", avg);
//	return 0;
//ȫ�ֱ�����������.c�ļ�����ʱ��һ���ļ���Ҫ������һ���ļ���ȫ�ֱ���ʱ����Ҫ������һ�£�extern+��������+�������ƣ�����һ���ļ���Ⱦ��Ƕ���һ��extern
//�������ڣ�һ�������Ӵ��������ٵ�ʱ��Σ�ȫ�ֱ������������ھ��ǳ�����������ڣ��ֲ��������������ھ��Ǵӽ���ֲ���Χ�����ֲ���Χ

//����
//int main()
//{
	//1.���泣��
	//3.14;
	//3;
	//'a';//�ַ��ǵ����ţ��ַ�����˫����
	//"asdf";
	//2.��const���εĳ����������㲻ϣ��һ�������ٱ仯��ʱ�򣬱������ǰ�����const���Σ���ʱ�����г������������б��������ʣ�Ҳ����˵������ȫ��������
	//const int a = 10;
	//3.#define����ı�ʶ���������ǲ��ɸĵģ��൱�ڶ���һ�����ű�ʾһ����
//#define MAX 10000//��ʱMAX����10000�����������ٽ�MAX=200����Ҳ��10000���������������﷨�����
//	return 0;
//}
//4.ö�ٳ���  enum+����ķ����൱�ڶ�����һ������int���͸о��ı���
//enum power
//{
//	low,//���������Щö�ٳ�����ֵ�Ļ������ǵ�ֵ����ӵ�һ����ʼĬ��Ϊ��0 1 2....Ҳ����˵low��ֵ��0��normal����1...
//	    //���ǣ�������Ǹ�ֵnormal=2ʱ��low��Ȼ��0������normal��֮���ö�ٳ�����������normal�ĸ�ֵ��μ�һ
//	normal=2,
//	high
//};
//int main()
//{
//	enum power s = low;//��ʱsֻ�������涨���ö�ٳ�����Χ�仯
//	printf("%d\n", low);
//	printf("%d\n", normal);
//	printf("%d\n",high );
//	return 0;
//}

//�ַ�������˫������������һ���ַ���������־��\0��Ҳ����˵��ÿһ���ַ���ĩβ����һ�����ص�\0����������֤���룺
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };//ע����ַ������з���ʱҪ��''������"",
//	printf("%s\n", arr1);//��ӡ�ַ�������ʱҪ��%s������%f��˫����%lf������%d�������ַ�%c��
//	printf("%s\n", arr2);
//	return 0;
//}//��ʱ��ӡ�����Ľ��arr2��abc���滹��һ�����룬�����Ҫ������ʾֻ��Ҫ��arr2�������������ϡ�\0������
// 
// 
//���ַ����ĳ���,��Ҫ�õ�strlen�������ǲ��ַ����ȵĺ�������Ҫ����#include<string.h>ͷ�ļ�
/*int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}*///arr1�������3��arr2��������������Ҫ���ϡ�\0���Ż����3
//ת���ַ���ת����˼���ַ��磺printf���\n�Ͳ���һ��б�ܺ�һ���ַ�����˼�ˣ�����ת���ַ����е���˼���ͱ��������ӡһ���ļ�·����ʱ����Щ�ַ���\����һ��ͱ���˼��
//���ʱ�������Ҫ��ӡ��ԭ�����ַ���ͨ��ֻ����ת���ַ�ǰ��Ӹ�\�Ϳ�����,\t����ˮƽ�Ʊ�Ҳ����һ���ո񣬿ո����ַ����ĳ�����Ҳռһ����λ����
/*int main()
{
	printf(""C:\Program Files(x86)\360JiLian\Uninstall.exe"");
	return 0;
}*///�����⴮���룬ֻ��Ҫ����ʾ����ĵط�ǰ�����\�Ϳ�����

//�ر�ע�⣺/+ һ����λ��8��������ʾ����˼�ǣ������8����ת����ʮ���Ƶ�ASCLL����������0��ʮ������48ʮ��������30��A��ʮ������65ʮ��������41��a��ʮ������97ʮ��
//������61
//int main()
//{
//	printf("%c\n",'\156');//�����n        �ر�ע�⣡����/138��������/13��8������/138��Ϊ8����û��8��ֻ�ܰ�/13����16��������
//	return 0;
//}
//��/+��λʮ����������Ҳ�Ǵ�ӡASCLL��
//int main()
//{
//	printf("%d\n",strlen("\156"));//�����n
//	return 0;
//}