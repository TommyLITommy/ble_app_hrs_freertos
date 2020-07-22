#ifndef __UI_TS_TIRE_SELECT_CAR_H__
#define __UI_TS_TIRE_SELECT_CAR_H__

enum
{
	UITSTSCAR_DISPLAY_AREA_CAR_BODY = 0,
	UITSTSCAR_DISPLAY_AREA_TIRE_01,
	UITSTSCAR_DISPLAY_AREA_TIRE_01_CIRCLE,
	UITSTSCAR_DISPLAY_AREA_TIRE_02,
	UITSTSCAR_DISPLAY_AREA_TIRE_02_CIRCLE,
	UITSTSCAR_DISPLAY_AREA_TIRE_03,
	UITSTSCAR_DISPLAY_AREA_TIRE_03_CIRCLE,
	UITSTSCAR_DISPLAY_AREA_TIRE_04,
	UITSTSCAR_DISPLAY_AREA_TIRE_04_CIRCLE,
	UITSTSCAR_DISPLAY_AREA_BACK,
	UITSTSCAR_DISPLAY_AREA_OK,
	UITSTSCAR_DISPLAY_AREA_MAX,
};

extern void ui_ts_tire_select_car_enter(void);
extern void ui_ts_tire_select_car_exit(void);
extern void ui_ts_tire_select_car_show(void);
extern void ui_ts_tire_select_car_init(void);

#endif
