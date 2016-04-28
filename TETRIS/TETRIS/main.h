#pragma once
#include "tetris.h"

/**
* eventInitilize()
*	�� �Լ��� ���α׷��� �ʱ�ȭ �� �� �� �ѹ��� ����˴ϴ�.
*/
void eventInitilize();

/**
* eventGameInit()
*	�� �Լ��� �� ���Ӹ��� ���� ���� ���� ����˴ϴ�.
*/
void eventGameInit();

/**
* eventGameOver()
*	�� �Լ��� �� ���Ӹ��� ������ ������ ��(=�׾��� ��) ����˴ϴ�.
*/
void eventGameOver();

/**
* eventKeyPress(key)
*	�� �Լ��� ���� �߿� Ű�� �ԷµǾ��ٸ� ����˴ϴ�.
*	- ����: key, �Էµ� Ű�� int ���·� ��ȯ�˴ϴ�.
*/
void eventKeyPress(int key);

/**
* eventLoop()
*	�� �Լ��� ���� �߿� �� �ð� ���� ���� ����˴ϴ�.
*	�� �Լ��� ȣ��Ǵ� �ð� ������ �����Ϸ��� timeInterval���� �����ϸ� �˴ϴ�.
*/
void eventLoop();