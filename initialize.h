void Initialize();
void MainScreen();
void SelectLevel();
void GameStart( char _levelName[] );
void Credit();
void ColorChange( char _string[], char _variable, int _color );
void MapLoad( char _fileName[] );
void MoveCursor( int _x, int _y );

void Initialize()
{
	SetConsoleTitle( "::PUSH PUSH:: by KSY CYJ" );
	system( "mode con lines=16 cols=41" );
	system( "color 0E" );
	system( "cls" );
}

//�Լ� �����ε��� �Ұ����Ͽ� �ּ�ó��
/*void ColorChange( char _string[] )
{
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 15 );
	printf( _string );
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 14 );
}*/
void ColorChange( char _string[], char _variable[], int _color )
{
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), _color );
	printf( _string, _variable );
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 14 );
}
void MainScreen()
{
	char m_select = -1;

	system( "cls" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );
	printf( "��                                    ��\n" );
	printf( "��        ");
	ColorChange( "P U S H      P U S H", NULL, 15 );
	printf( "        ��\n" );
	printf( "��             By KSY CYJ             ��\n" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );
	printf( "��                                    ��\n" );
	printf( "��                                    ��\n" );
	printf( "��  " );
	ColorChange( "�� [ S ] ���� ����", NULL, 15 );
	printf( "                ��\n" );
	printf( "��                                    ��\n" );
	printf( "��                                    ��\n" );
	printf( "��                                    ��\n" );
	printf( "��  ");
	ColorChange( "�� [ C ] ũ����", NULL, 15 );
	printf( "                   ��\n" );
	printf( "��                                    ��\n" );
	printf( "��                                    ��\n" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );

	while( !(( m_select=='s' )||( m_select=='r' )||( m_select=='c' ) ) )
	{
		m_select = getch();
		switch( m_select )
		{
			case 's':
				//printf( "\a" );
				SelectLevel();
				break;
			case 'c':
				//printf( "\a" );
				Credit();
				break;
			default:
				break;
		}	
	}
};

void SelectLevel()
{
	char m_select = -1;
	char m_fileName[] = "level0.dat";

	system( "cls" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );
	printf( "��                                    ��\n" );
	printf( "��        ");
	ColorChange( "P U S H      P U S H", NULL, 15 );
	printf( "        ��\n" );
	printf( "��             By KSY CYJ             ��\n" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );
	printf( "��                                    ��\n" );
	printf( "��           " );
	ColorChange( "�� �������� ��", NULL, 15 );
	printf( "           ��\n" );
	printf( "��                                    ��\n" );
	printf( "��  ");
	ColorChange( "�� [ 1 ] ���� ��ȣ�� �Է�", NULL, 15 );
	printf("         ��\n" );
	printf( "��                                    ��\n" );
	printf( "��  ");
	ColorChange( "�� [ 2 ] ���� ���� �Է�", NULL, 15 );
	printf("           ��\n" );
	printf( "��                                    ��\n" );
	printf( "��          ���ư����� [R]Ű          ��\n" );
	printf( "��                                    ��\n" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );

	while( !(( m_select=='1' )||( m_select=='2' )||( m_select=='r' )) )
	{
		m_select = getch();
		MoveCursor( 6, 9 );
		printf("                        \n");
		MoveCursor( 6, 11 );
		printf("                        \n");
		MoveCursor( 6, 9 );
		switch( m_select )
		{
			case '1':
				//printf( "\a" );
				ColorChange( "������ ������ �ּ���.(0-5)\n", NULL, 15 );
				MoveCursor( 6, 10 );
				
				m_select = getche();

				if( m_select == 'r' )
				{
					m_select = -1;
					SelectLevel();
				}
				else
				{
					printf( "%s", m_fileName );
					m_fileName[5] = m_select;
					printf( "%s", m_fileName );
				}
				GameStart( m_fileName );
				break;
			case '2':
				//printf( "\a" );
				ColorChange( "���ϸ��� �Է��� �ּ���.\n", NULL, 15 );
				MoveCursor( 6, 10 );
				scanf( "%s", m_fileName );
				if( m_fileName == "r" )
				{
					SelectLevel();
				}
				else
				{
					printf( "%s", m_fileName );
				}
				GameStart( m_fileName );
				break;
			case 'r':
				MainScreen();
				break;
			default:
				break;
		}	
	}
};

void Credit()
{
	char m_select = -1;

	system( "cls" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );
	printf( "��                                    ��\n" );
	printf( "��        ");
	ColorChange( "P U S H      P U S H", NULL, 15 );
	printf( "        ��\n" );
	printf( "��             By KSY CYJ             ��\n" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );
	printf( "��                                    ��\n" );
	printf( "��            �� ũ���� ��            ��\n" );
	printf( "��                                    ��\n" );
	printf( "��           �̷��� �ѹ���            ��\n" );
	printf( "��         �غ��� �;����ϴ�.         ��\n" );
	printf( "��               �����               ��\n" );
	printf( "��                                    ��\n" );
	printf( "��          ���ư����� [R]Ű          ��\n" );
	printf( "��                                    ��\n" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );

	while( !( m_select=='r' ) )
	{
		m_select = getch();
		if( m_select == 'r' )
		{
			//printf( "\a" );
			MainScreen();
		}
	}
}
