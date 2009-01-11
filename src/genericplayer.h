#ifndef GENERICPLAY_H
#define GENERICPLAY_H

#ifdef __cplusplus
extern "C"
{
#endif
/**
 * ����ǰ����״̬
 */
	extern int g_suspend_status;

/**
 * ��ǰ����ʱ�䣬��������
 */
	extern double g_play_time;

/**
 * Wave��������ʱ����ʱ��
 */
	extern double g_suspend_playing_time;

/**
 * ���ֿ����������
 */
	extern int g_seek_seconds;

/**
 * ��ǰ��������״̬
 */
	extern int g_status;

/**
 * �ϴΰ�����˼�����
 */
	extern bool g_last_seek_is_forward;

/**
 * �ϴΰ�����˼�ʱ��
 */
	extern u64 g_last_seek_tick;

/**
 *  ������˼�����
 */
	extern dword g_seek_count;

	int generic_lock(void);
	int generic_unlock(void);
	int generic_set_opt(const char *unused, const char *values);
	int generic_play(void);
	int generic_pause(void);
	int generic_get_status(void);
	int generic_fforward(int sec);
	int generic_fbackward(int sec);
	int generic_end(void);
	int generic_init(void);
	int generic_resume(const char *spath, const char *lpath);
	int generic_suspend(void);

#ifdef __cplusplus
}
#endif

#endif