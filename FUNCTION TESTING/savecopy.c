#include< stdio.h >

int main()
{
	FILE *m_fp;
	int i = 1;
	char m_temp[10][10];

	char m_name[10] = "zzoyu";
	int m_score = rand()%100;

	m_fp = fopen( "userdata.dat", "w" );
	fclose( m_fp );

	m_fp = fopen( "userdata.dat", "r" );

	if( m_fp != NULL )
	{
		printf("m_fp�� ���� �ִ�\n");
		while( !feof( m_fp ) )
		{
			printf("�д´�\n");
			fgets( m_temp[i-1], 10, m_fp );
			i = i + 1;
		}
	}
	fclose( m_fp );

	printf("�ݾƵ�\n");

	if( i < 10 )
	{
		printf("i�� 10���� �۴�\n");
		m_fp = fopen( "userdata.dat", "a" );
		fprintf( m_fp, "%s\n%d\n", m_name, m_score );
		printf("���\n");
	}
	else
	{
		fclose( m_fp );
		printf("i�� 10���� ũ��\n");
		m_fp = fopen( "userdata.dat", "w" );

		fprintf( m_fp, "%s", m_temp );
	}
	fclose( m_fp );
	printf("��\n");
}