// Normal Mario Geo

#define hmsShadow(a,b,c) GEO_SHADOW(c,b,a),
#define hmsCProg(a,b) GEO_ASM(a,b),
#define hmsSelect(a,b) GEO_SWITCH_CASE(a,b),
#define CtrlMarioEye geo_switch_mario_eyes
#define CtrlMarioHead geo_mario_head_rotation
#define CtrlMarioWaist geo_move_mario_part_from_parent
#define CtrlMarioRenderMode geo_switch_mario_cap_effect
#define CtrlMarioAlpha geo_mirror_mario_set_alpha
#define CtrlMarioLOD geo_switch_mario_stand_run
#define RCP_MarioHierarchy mario_geo
#define hmsSucker(a,b,c,d,e) GEO_HELD_OBJECT(a,b,c,d,e),
#define CtrlMarioHand geo_switch_mario_hand
#define CtrlMarioTaking geo_switch_mario_hand_grab_pos
#define hmsRotate(a,b,c) GEO_ROTATION_NODE(a,b,c, 0),
#define hmsCall(a) GEO_BRANCH(1, a),
#define hmsReturn() GEO_RETURN(),
#define hmsLOD(a,b) GEO_RENDER_RANGE(a,b),
#define hmsGroup() CMD_BBH(11, 0, 0),
#define hmsBegin() GEO_OPEN_NODE(),
#define hmsTrans(x,y,z) GEO_TRANSLATE(0x00, x,y,z),
#define hmsScale(s) GEO_SCALE(0x00, (u32)(s * 65536)),
#define hmsJoint(l,dl,x,y,z) GEO_ANIMATED_PART(l, x, y, z, dl),
#define hmsEnd() GEO_CLOSE_NODE(),
#define hmsExit() GEO_END(),
#define hmsBboard(x,y,z) GEO_BILLBOARD(),
#define hmsGfx(l,dl) GEO_DISPLAY_LIST(l, dl),

#define RM_SURF LAYER_OPAQUE
#define RM_XSURF LAYER_TRANSPARENT
#define RM_SPRITE LAYER_ALPHA

#define	softspriteON	1

#define Hierarchy const GeoLayout

//extern ulong CtrlMarioAlpha(int code, MapNode *node, void *data);
//extern ulong CtrlMarioRenderMode(int code, MapNode *node);

extern Gfx RCP_mario_head1[];
extern Gfx RCP_mario_head2[];
extern Gfx RCP_mario_head3[];
extern Gfx RCP_mario_head4[];
extern Gfx RCP_mario_head5[];
extern Gfx RCP_mario_head6[];
extern Gfx RCP_mario_head7[];
extern Gfx RCP_mario_head8[];

extern Gfx RCP_mario_far_head1[];
extern Gfx RCP_mario_far_head2[];
extern Gfx RCP_mario_far_head3[];
extern Gfx RCP_mario_far_head4[];
extern Gfx RCP_mario_far_head5[];
extern Gfx RCP_mario_far_head6[];
extern Gfx RCP_mario_far_head7[];
extern Gfx RCP_mario_far_head8[];

extern Gfx RCP_swim_hand_l[];
extern Gfx RCP_swim_hand_r[];
extern Gfx RCP_mario_vsign_hand[];

extern Gfx RCP_mario_near_body[];
extern Gfx RCP_mario_mid_body[];
extern Gfx RCP_mario_far_body[];

extern Gfx RCP_mario_near0[];
extern Gfx RCP_mario_near1[];
extern Gfx RCP_mario_near2[];
extern Gfx RCP_mario_near3[];
extern Gfx RCP_mario_near4[];
extern Gfx RCP_mario_near5[];
extern Gfx RCP_mario_near6[];
extern Gfx RCP_mario_near7[];
extern Gfx RCP_mario_near8[];
extern Gfx RCP_mario_near9[];
extern Gfx RCP_mario_near10[];
extern Gfx RCP_mario_near11[];
extern Gfx RCP_mario_near14[];

extern Gfx RCP_mario_mid0[];
extern Gfx RCP_mario_mid1[];
extern Gfx RCP_mario_mid2[];
extern Gfx RCP_mario_mid3[];
extern Gfx RCP_mario_mid4[];
extern Gfx RCP_mario_mid5[];
extern Gfx RCP_mario_mid6[];
extern Gfx RCP_mario_mid7[];
extern Gfx RCP_mario_mid8[];
extern Gfx RCP_mario_mid9[];
extern Gfx RCP_mario_mid10[];
extern Gfx RCP_mario_mid11[];
extern Gfx RCP_mario_mid14[];

extern Gfx RCP_mario_far0[];
extern Gfx RCP_mario_far1[];
extern Gfx RCP_mario_far2[];
extern Gfx RCP_mario_far3[];
extern Gfx RCP_mario_far4[];
extern Gfx RCP_mario_far5[];
extern Gfx RCP_mario_far6[];
extern Gfx RCP_mario_far7[];
extern Gfx RCP_mario_far8[];
extern Gfx RCP_mario_far9[];
extern Gfx RCP_mario_far10[];
extern Gfx RCP_mario_far11[];
extern Gfx RCP_mario_far14[];



/********************************************************************************/
/*	Title mario hierarchy map data.												*/
/********************************************************************************/
static Hierarchy RCP_TitleMarioHierarchy[] = {
	hmsJoint(RM_SURF, NULL, 0, 0, 0)											/* chn14		*/
	hmsBegin()
		hmsJoint(RM_SURF, RCP_mario_near14, 0, 0, 0)							/* m_waist1_3	*/
		hmsBegin()
//			hmsCProg(0, MarioProc1)
			hmsJoint(RM_SURF, RCP_mario_near_body, 68, 0, 0)					/* m_body1		*/
			hmsBegin()

				hmsJoint(RM_SURF, NULL, 87, 0, 0)							/* m_head2		*/
				hmsBegin()
					hmsSelect(0, CtrlMarioEye)							/* for the eye animation	*/
					hmsBegin()
						hmsGfx(RM_SURF, RCP_mario_head1)
						hmsGfx(RM_SURF, RCP_mario_head2)
						hmsGfx(RM_SURF, RCP_mario_head3)
						hmsGfx(RM_SURF, RCP_mario_head4)
						hmsGfx(RM_SURF, RCP_mario_head5)
					hmsEnd()
				hmsEnd()

				hmsJoint(RM_SURF, NULL, 67, -10, 79)							/* chn6			*/
				hmsBegin()
					hmsJoint(RM_SURF, RCP_mario_near2, 0, 0, 0)				/* m_larmA1		*/
					hmsBegin()
						hmsJoint(RM_SURF, RCP_mario_near1, 65, 0, 0)			/* m_larmB1		*/
						hmsBegin()
							hmsJoint(RM_SURF, RCP_mario_near0, 60, 0, 0)		/* m_lhamd1		*/
						hmsEnd()
					hmsEnd()
				hmsEnd()

				hmsJoint(RM_SURF, NULL, 68, -10, -79)						/* chn10		*/
				hmsBegin()
					hmsJoint(RM_SURF, RCP_mario_near5, 0, 0, 0)				/* m_rarmA1		*/
					hmsBegin()
						hmsJoint(RM_SURF, RCP_mario_near4, 65, 0, 0)			/* m_rarmB1		*/
						hmsBegin()
							hmsJoint(RM_SURF, RCP_mario_near3, 60, 0, 0)		/* m_rhand1		*/
						hmsEnd()
					hmsEnd()
				hmsEnd()

			hmsEnd()

			hmsJoint(RM_SURF, NULL, 13, -8, 42)								/* chn15		*/
			hmsBegin()
				hmsJoint(RM_SURF, RCP_mario_near11, 0, 0, 0)					/* m_llegA1		*/
				hmsBegin()
					hmsJoint(RM_SURF, RCP_mario_near10, 89, 0, 0)			/* m_llegB1		*/
					hmsBegin()
						hmsJoint(RM_SURF, RCP_mario_near9, 67, 0, 0)			/* m_lfoot1		*/
					hmsEnd()
				hmsEnd()
			hmsEnd()

			hmsJoint(RM_SURF, NULL, 13, -8, -42)								/* chn17		*/
			hmsBegin()
				hmsJoint(RM_SURF, RCP_mario_near8, 0, 0, 0)					/* m_rlegA1		*/
				hmsBegin()
					hmsJoint(RM_SURF, RCP_mario_near7, 89, 0, 0)				/* m_rlegB1		*/
					hmsBegin()
						hmsJoint(RM_SURF, RCP_mario_near6, 67, 0, 0)			/* m_rfoot1		*/
					hmsEnd()
				hmsEnd()
			hmsEnd()

		hmsEnd()
	hmsEnd()
	hmsReturn()
};

/********************************************************************************/
/*	Near mario hierarchy map data [ Opaque ].									*/
/********************************************************************************/
const GeoLayout RCP_NearMarioHierarchy[] = {
	hmsJoint(RM_SURF, NULL, 0, 0, 0)											/* chn14		*/
	hmsBegin()
		hmsJoint(RM_SURF, RCP_mario_near14, 0, 0, 0)							/* m_waist1_3	*/
		hmsBegin()

			hmsCProg(0, CtrlMarioWaist)
			hmsRotate(0, 0, 0)
			hmsBegin()
				hmsJoint(RM_SURF, RCP_mario_near_body, 68, 0, 0)					/* m_body1		*/
				hmsBegin()

					hmsJoint(RM_SURF, NULL, 87, 0, 0)							/* m_head2		*/
					hmsBegin()
						hmsCProg(0, CtrlMarioHead)
						hmsRotate(0, 0, 0)								/* for control by program	*/
						hmsBegin()
							hmsSelect(0, CtrlMarioEye)					/* for the eye animation	*/
							hmsBegin()
								hmsGfx(RM_SURF, RCP_mario_head1)
								hmsGfx(RM_SURF, RCP_mario_head2)
								hmsGfx(RM_SURF, RCP_mario_head3)
								hmsGfx(RM_SURF, RCP_mario_head4)
								hmsGfx(RM_SURF, RCP_mario_head5)
								hmsGfx(RM_SURF, RCP_mario_head6)
								hmsGfx(RM_SURF, RCP_mario_head7)
								hmsGfx(RM_SURF, RCP_mario_head8)
							hmsEnd()
						hmsEnd()
					hmsEnd()

					hmsJoint(RM_SURF, NULL, 67, -10, 79)							/* chn6			*/
					hmsBegin()
						hmsJoint(RM_SURF, RCP_mario_near2, 0, 0, 0)				/* m_larmA1		*/
						hmsBegin()
							hmsJoint(RM_SURF, RCP_mario_near1, 65, 0, 0)			/* m_larmB1		*/
							hmsBegin()
								hmsSelect(0, CtrlMarioHand)
								hmsBegin()
									hmsJoint(RM_SURF, RCP_mario_near0, 60, 0, 0)		/* m_lhamd1		*/
									hmsJoint(RM_SURF, RCP_swim_hand_l, 60, 0, 0)
									hmsJoint(RM_SURF, RCP_swim_hand_l, 60, 0, 0)
								hmsEnd()
							hmsEnd()
						hmsEnd()
					hmsEnd()

					hmsJoint(RM_SURF, NULL, 68, -10, -79)						/* chn10		*/
					hmsBegin()
						hmsJoint(RM_SURF, RCP_mario_near5, 0, 0, 0)				/* m_rarmA1		*/
						hmsBegin()
							hmsJoint(RM_SURF, RCP_mario_near4, 65, 0, 0)			/* m_rarmB1		*/
							hmsBegin()
								hmsSelect(0, CtrlMarioHand)
								hmsBegin()
									hmsJoint(RM_SURF, RCP_mario_near3, 60, 0, 0)		/* m_rhand1		*/
									hmsBegin()
										hmsSucker(0,0,0, 0,CtrlMarioTaking)
									hmsEnd()
									hmsJoint(RM_SURF, RCP_swim_hand_r, 60, 0, 0)
									hmsBegin()
										hmsSucker(0,0,0, 0,CtrlMarioTaking)
									hmsEnd()
									hmsJoint(RM_SURF, RCP_mario_vsign_hand, 60, 0, 0)
								hmsEnd()
							hmsEnd()
						hmsEnd()
					hmsEnd()
				hmsEnd()

			hmsEnd()

			hmsJoint(RM_SURF, NULL, 13, -8, 42)								/* chn15		*/
			hmsBegin()
				hmsJoint(RM_SURF, RCP_mario_near11, 0, 0, 0)					/* m_llegA1		*/
				hmsBegin()
					hmsJoint(RM_SURF, RCP_mario_near10, 89, 0, 0)			/* m_llegB1		*/
					hmsBegin()
						hmsJoint(RM_SURF, RCP_mario_near9, 67, 0, 0)			/* m_lfoot1		*/
					hmsEnd()
				hmsEnd()
			hmsEnd()

			hmsJoint(RM_SURF, NULL, 13, -8, -42)								/* chn17		*/
			hmsBegin()
				hmsJoint(RM_SURF, RCP_mario_near8, 0, 0, 0)					/* m_rlegA1		*/
				hmsBegin()
					hmsJoint(RM_SURF, RCP_mario_near7, 89, 0, 0)				/* m_rlegB1		*/
					hmsBegin()
						hmsJoint(RM_SURF, RCP_mario_near6, 67, 0, 0)			/* m_rfoot1		*/
					hmsEnd()
				hmsEnd()
			hmsEnd()

		hmsEnd()
	hmsEnd()
	hmsReturn()
};

/********************************************************************************/
/*	Near mario hierarchy map data [ Translucent & Transparent ].				*/
/********************************************************************************/
const GeoLayout RCP_NearMarioHierarchy_XLU[] = {
	hmsJoint(RM_XSURF, NULL, 0, 0, 0)											/* chn14		*/
	hmsBegin()
		hmsJoint(RM_XSURF, RCP_mario_near14, 0, 0, 0)							/* m_waist1_3	*/
		hmsBegin()
			hmsCProg(0, CtrlMarioWaist)
			hmsRotate(0, 0, 0)
			hmsBegin()

				hmsJoint(RM_XSURF, RCP_mario_near_body, 68, 0, 0)					/* m_body1		*/
				hmsBegin()

					hmsJoint(RM_XSURF, NULL, 87, 0, 0)							/* m_head2		*/
					hmsBegin()
						hmsCProg(0, CtrlMarioHead)
						hmsRotate(0, 0, 0)								/* for control by program	*/
						hmsBegin()
							hmsSelect(0, CtrlMarioEye)					/* for the eye animation	*/
							hmsBegin()
								hmsGfx(RM_XSURF, RCP_mario_head1)
								hmsGfx(RM_XSURF, RCP_mario_head2)
								hmsGfx(RM_XSURF, RCP_mario_head3)
								hmsGfx(RM_XSURF, RCP_mario_head4)
								hmsGfx(RM_XSURF, RCP_mario_head5)
								hmsGfx(RM_XSURF, RCP_mario_head6)
								hmsGfx(RM_XSURF, RCP_mario_head7)
								hmsGfx(RM_XSURF, RCP_mario_head8)
							hmsEnd()
						hmsEnd()
					hmsEnd()

					hmsJoint(RM_XSURF, NULL, 67, -10, 79)							/* chn6			*/
					hmsBegin()
						hmsJoint(RM_XSURF, RCP_mario_near2, 0, 0, 0)				/* m_larmA1		*/
						hmsBegin()
							hmsJoint(RM_XSURF, RCP_mario_near1, 65, 0, 0)			/* m_larmB1		*/
							hmsBegin()
								hmsSelect(0, CtrlMarioHand)
								hmsBegin()
									hmsJoint(RM_XSURF, RCP_mario_near0, 60, 0, 0)		/* m_lhamd1		*/
									hmsJoint(RM_XSURF, RCP_swim_hand_l, 60, 0, 0)
									hmsJoint(RM_XSURF, RCP_swim_hand_l, 60, 0, 0)
								hmsEnd()
							hmsEnd()
						hmsEnd()
					hmsEnd()

					hmsJoint(RM_XSURF, NULL, 68, -10, -79)						/* chn10		*/
					hmsBegin()
						hmsJoint(RM_XSURF, RCP_mario_near5, 0, 0, 0)				/* m_rarmA1		*/
						hmsBegin()
							hmsJoint(RM_XSURF, RCP_mario_near4, 65, 0, 0)			/* m_rarmB1		*/
							hmsBegin()
								hmsSelect(0, CtrlMarioHand)
								hmsBegin()
									hmsJoint(RM_XSURF, RCP_mario_near3, 60, 0, 0)		/* m_rhand1		*/
									hmsBegin()
										hmsSucker(0,0,0, 0,CtrlMarioTaking)
									hmsEnd()
									hmsJoint(RM_XSURF, RCP_swim_hand_r, 60, 0, 0)
									hmsBegin()
										hmsSucker(0,0,0, 0,CtrlMarioTaking)
									hmsEnd()
									hmsJoint(RM_XSURF, RCP_mario_vsign_hand, 60, 0, 0)
								hmsEnd()
							hmsEnd()
						hmsEnd()
					hmsEnd()
				hmsEnd()
			hmsEnd()

			hmsJoint(RM_XSURF, NULL, 13, -8, 42)								/* chn15		*/
			hmsBegin()
				hmsJoint(RM_XSURF, RCP_mario_near11, 0, 0, 0)					/* m_llegA1		*/
				hmsBegin()
					hmsJoint(RM_XSURF, RCP_mario_near10, 89, 0, 0)			/* m_llegB1		*/
					hmsBegin()
						hmsJoint(RM_XSURF, RCP_mario_near9, 67, 0, 0)			/* m_lfoot1		*/
					hmsEnd()
				hmsEnd()
			hmsEnd()

			hmsJoint(RM_XSURF, NULL, 13, -8, -42)								/* chn17		*/
			hmsBegin()
				hmsJoint(RM_XSURF, RCP_mario_near8, 0, 0, 0)					/* m_rlegA1		*/
				hmsBegin()
					hmsJoint(RM_XSURF, RCP_mario_near7, 89, 0, 0)				/* m_rlegB1		*/
					hmsBegin()
						hmsJoint(RM_XSURF, RCP_mario_near6, 67, 0, 0)			/* m_rfoot1		*/
					hmsEnd()
				hmsEnd()
			hmsEnd()

		hmsEnd()
	hmsEnd()
	hmsReturn()
};

/********************************************************************************/
/*	Middle mario hierarchy map data [ Opaque ].									*/
/********************************************************************************/
const GeoLayout RCP_MidMarioHierarchy[] = {
	hmsJoint(RM_SURF, NULL, 0, 0, 0)										/* chn14		*/
	hmsBegin()
		hmsJoint(RM_SURF, RCP_mario_mid14, 0, 0, 0)						/* m_waist1_3	*/
		hmsBegin()
			hmsCProg(0, CtrlMarioWaist)
			hmsRotate(0, 0, 0)
			hmsBegin()

//				hmsCProg(0, MarioProc1)
				hmsJoint(RM_SURF, RCP_mario_mid_body, 68, 0, 0)					/* m_body1		*/
				hmsBegin()

					hmsJoint(RM_SURF, NULL, 87, 0, 0)						/* m_head2		*/
					hmsBegin()
						hmsCProg(0, CtrlMarioHead)
						hmsRotate(0, 0, 0)							/* for control by program	*/
						hmsBegin()
							hmsSelect(0, CtrlMarioEye)				/* for the eye animation	*/
							hmsBegin()
								hmsGfx(RM_SURF, RCP_mario_head1)
								hmsGfx(RM_SURF, RCP_mario_head2)
								hmsGfx(RM_SURF, RCP_mario_head3)
								hmsGfx(RM_SURF, RCP_mario_head4)
								hmsGfx(RM_SURF, RCP_mario_head5)
								hmsGfx(RM_SURF, RCP_mario_head6)
								hmsGfx(RM_SURF, RCP_mario_head7)
								hmsGfx(RM_SURF, RCP_mario_head8)
							hmsEnd()
						hmsEnd()
					hmsEnd()

					hmsJoint(RM_SURF, NULL, 67, -10, 79)							/* chn6			*/
					hmsBegin()
						hmsJoint(RM_SURF, RCP_mario_mid2, 0, 0, 0)				/* m_larmA1		*/
						hmsBegin()
							hmsJoint(RM_SURF, RCP_mario_mid1, 65, 0, 0)			/* m_larmB1		*/
							hmsBegin()
								hmsSelect(0, CtrlMarioHand)
								hmsBegin()
									hmsJoint(RM_SURF, RCP_mario_mid0 , 60, 0, 0)		/* m_lhamd1		*/
									hmsJoint(RM_SURF, RCP_swim_hand_l, 60, 0, 0)
									hmsJoint(RM_SURF, RCP_swim_hand_l, 60, 0, 0)
								hmsEnd()
							hmsEnd()
						hmsEnd()
					hmsEnd()

					hmsJoint(RM_SURF, NULL, 68, -10, -79)						/* chn10		*/
					hmsBegin()
						hmsJoint(RM_SURF, RCP_mario_mid5, 0, 0, 0)				/* m_rarmA1		*/
						hmsBegin()
							hmsJoint(RM_SURF, RCP_mario_mid4, 65, 0, 0)			/* m_rarmB1		*/
							hmsBegin()
								hmsSelect(0, CtrlMarioHand)
								hmsBegin()
									hmsJoint(RM_SURF, RCP_mario_mid3 , 60, 0, 0)		/* m_rhand1		*/
									hmsBegin()
										hmsSucker(0,0,0, 0,CtrlMarioTaking)
									hmsEnd()
									hmsJoint(RM_SURF, RCP_swim_hand_r, 60, 0, 0)
									hmsBegin()
										hmsSucker(0,0,0, 0,CtrlMarioTaking)
									hmsEnd()
									hmsJoint(RM_SURF, RCP_mario_vsign_hand, 60, 0, 0)
								hmsEnd()
							hmsEnd()
						hmsEnd()
					hmsEnd()
				hmsEnd()
			hmsEnd()

			hmsJoint(RM_SURF, NULL, 13, -8, 42)								/* chn15		*/
			hmsBegin()
				hmsJoint(RM_SURF, RCP_mario_mid11, 0, 0, 0)					/* m_llegA1		*/
				hmsBegin()
					hmsJoint(RM_SURF, RCP_mario_mid10, 89, 0, 0)				/* m_llegB1		*/
					hmsBegin()
						hmsJoint(RM_SURF, RCP_mario_mid9, 67, 0, 0)			/* m_lfoot1		*/
					hmsEnd()
				hmsEnd()
			hmsEnd()

			hmsJoint(RM_SURF, NULL, 13, -8, -42)								/* chn17		*/
			hmsBegin()
				hmsJoint(RM_SURF, RCP_mario_mid8, 0, 0, 0)					/* m_rlegA1		*/
				hmsBegin()
					hmsJoint(RM_SURF, RCP_mario_mid7, 89, 0, 0)				/* m_rlegB1		*/
					hmsBegin()
						hmsJoint(RM_SURF, RCP_mario_mid6, 67, 0, 0)			/* m_rfoot1		*/
					hmsEnd()
				hmsEnd()
			hmsEnd()

		hmsEnd()
	hmsEnd()
	hmsReturn()
};

/********************************************************************************/
/*	Middle mario hierarchy map data [ Translucent & Transparent ].				*/
/********************************************************************************/
const GeoLayout RCP_MidMarioHierarchy_XLU[] = {
	hmsJoint(RM_XSURF, NULL, 0, 0, 0)										/* chn14		*/
	hmsBegin()
		hmsJoint(RM_XSURF, RCP_mario_mid14, 0, 0, 0)						/* m_waist1_3	*/
		hmsBegin()
//			hmsCProg(0, MarioProc1)
			hmsJoint(RM_XSURF, RCP_mario_mid_body, 68, 0, 0)					/* m_body1		*/
			hmsBegin()

				hmsJoint(RM_XSURF, NULL, 87, 0, 0)						/* m_head2		*/
				hmsBegin()
					hmsCProg(0, CtrlMarioHead)
					hmsRotate(0, 0, 0)							/* for control by program	*/
					hmsBegin()
						hmsSelect(0, CtrlMarioEye)				/* for the eye animation	*/
						hmsBegin()
							hmsGfx(RM_XSURF, RCP_mario_head1)
							hmsGfx(RM_XSURF, RCP_mario_head2)
							hmsGfx(RM_XSURF, RCP_mario_head3)
							hmsGfx(RM_XSURF, RCP_mario_head4)
							hmsGfx(RM_XSURF, RCP_mario_head5)
							hmsGfx(RM_XSURF, RCP_mario_head6)
							hmsGfx(RM_XSURF, RCP_mario_head7)
							hmsGfx(RM_XSURF, RCP_mario_head8)
						hmsEnd()
					hmsEnd()
				hmsEnd()

				hmsJoint(RM_XSURF, NULL, 67, -10, 79)							/* chn6			*/
				hmsBegin()
					hmsJoint(RM_XSURF, RCP_mario_mid2, 0, 0, 0)				/* m_larmA1		*/
					hmsBegin()
						hmsJoint(RM_XSURF, RCP_mario_mid1, 65, 0, 0)			/* m_larmB1		*/
						hmsBegin()
							hmsSelect(0, CtrlMarioHand)
							hmsBegin()
								hmsJoint(RM_XSURF, RCP_mario_mid0 , 60, 0, 0)		/* m_lhamd1		*/
								hmsJoint(RM_XSURF, RCP_swim_hand_l, 60, 0, 0)
								hmsJoint(RM_XSURF, RCP_swim_hand_l, 60, 0, 0)
							hmsEnd()
						hmsEnd()
					hmsEnd()
				hmsEnd()

				hmsJoint(RM_XSURF, NULL, 68, -10, -79)						/* chn10		*/
				hmsBegin()
					hmsJoint(RM_XSURF, RCP_mario_mid5, 0, 0, 0)				/* m_rarmA1		*/
					hmsBegin()
						hmsJoint(RM_XSURF, RCP_mario_mid4, 65, 0, 0)			/* m_rarmB1		*/
						hmsBegin()
							hmsSelect(0, CtrlMarioHand)
							hmsBegin()
								hmsJoint(RM_XSURF, RCP_mario_mid3 , 60, 0, 0)		/* m_rhand1		*/
								hmsBegin()
									hmsSucker(0,0,0, 0,CtrlMarioTaking)
								hmsEnd()
								hmsJoint(RM_XSURF, RCP_swim_hand_r, 60, 0, 0)
								hmsBegin()
									hmsSucker(0,0,0, 0,CtrlMarioTaking)
								hmsEnd()
								hmsJoint(RM_XSURF, RCP_mario_vsign_hand, 60, 0, 0)
							hmsEnd()
						hmsEnd()
					hmsEnd()
				hmsEnd()

			hmsEnd()

			hmsJoint(RM_XSURF, NULL, 13, -8, 42)								/* chn15		*/
			hmsBegin()
				hmsJoint(RM_XSURF, RCP_mario_mid11, 0, 0, 0)					/* m_llegA1		*/
				hmsBegin()
					hmsJoint(RM_XSURF, RCP_mario_mid10, 89, 0, 0)				/* m_llegB1		*/
					hmsBegin()
						hmsJoint(RM_XSURF, RCP_mario_mid9, 67, 0, 0)			/* m_lfoot1		*/
					hmsEnd()
				hmsEnd()
			hmsEnd()

			hmsJoint(RM_XSURF, NULL, 13, -8, -42)								/* chn17		*/
			hmsBegin()
				hmsJoint(RM_XSURF, RCP_mario_mid8, 0, 0, 0)					/* m_rlegA1		*/
				hmsBegin()
					hmsJoint(RM_XSURF, RCP_mario_mid7, 89, 0, 0)				/* m_rlegB1		*/
					hmsBegin()
						hmsJoint(RM_XSURF, RCP_mario_mid6, 67, 0, 0)			/* m_rfoot1		*/
					hmsEnd()
				hmsEnd()
			hmsEnd()

		hmsEnd()
	hmsEnd()
	hmsReturn()
};

/********************************************************************************/
/*	Far mario hierarchy map data [ Opaque ].									*/
/********************************************************************************/
const GeoLayout RCP_FarMarioHierarchy[] = {
	hmsJoint(RM_SURF, NULL, 0, 0, 0)										/* chn14		*/
	hmsBegin()
		hmsJoint(RM_SURF, RCP_mario_far14, 0, 0, 0)						/* m_waist1_3	*/
		hmsBegin()
//  			hmsCProg(0, MarioProc1)
			hmsJoint(RM_SURF, RCP_mario_far_body, 68, 0, 0)					/* m_body1		*/
			hmsBegin()

				hmsJoint(RM_SURF, NULL, 87, 0, 0)						/* m_head2		*/
				hmsBegin()
					hmsCProg(0, CtrlMarioHead)
					hmsRotate(0, 0, 0)							/* for control by program	*/
					hmsBegin()
						hmsSelect(0, CtrlMarioEye)				/* for the eye animation	*/
						hmsBegin()
							hmsGfx(RM_SURF, RCP_mario_far_head1)
							hmsGfx(RM_SURF, RCP_mario_far_head2)
							hmsGfx(RM_SURF, RCP_mario_far_head3)
							hmsGfx(RM_SURF, RCP_mario_far_head4)
							hmsGfx(RM_SURF, RCP_mario_far_head5)
							hmsGfx(RM_SURF, RCP_mario_far_head6)
							hmsGfx(RM_SURF, RCP_mario_far_head7)
							hmsGfx(RM_SURF, RCP_mario_far_head8)
						hmsEnd()
					hmsEnd()
				hmsEnd()

				hmsJoint(RM_SURF, NULL, 67, -10, 79)							/* chn6			*/
				hmsBegin()
					hmsJoint(RM_SURF, RCP_mario_far2, 0, 0, 0)				/* m_larmA1		*/
					hmsBegin()
						hmsJoint(RM_SURF, RCP_mario_far1, 65, 0, 0)			/* m_larmB1		*/
						hmsBegin()
							hmsSelect(0, CtrlMarioHand)
							hmsBegin()
								hmsJoint(RM_SURF, RCP_mario_far0 , 60, 0, 0)		/* m_lhamd1		*/
								hmsJoint(RM_SURF, RCP_swim_hand_l, 60, 0, 0)
								hmsJoint(RM_SURF, RCP_swim_hand_l, 60, 0, 0)
							hmsEnd()
						hmsEnd()
					hmsEnd()
				hmsEnd()

				hmsJoint(RM_SURF, NULL, 68, -10, -79)						/* chn10		*/
				hmsBegin()
					hmsJoint(RM_SURF, RCP_mario_far5, 0, 0, 0)				/* m_rarmA1		*/
					hmsBegin()
						hmsJoint(RM_SURF, RCP_mario_far4, 65, 0, 0)			/* m_rarmB1		*/
						hmsBegin()
							hmsSelect(0, CtrlMarioHand)
							hmsBegin()
								hmsJoint(RM_SURF, RCP_mario_far3 , 60, 0, 0)		/* m_rhand1		*/
								hmsBegin()
									hmsSucker(0,0,0, 0,CtrlMarioTaking)
								hmsEnd()
								hmsJoint(RM_SURF, RCP_swim_hand_r, 60, 0, 0)
								hmsBegin()
									hmsSucker(0,0,0, 0,CtrlMarioTaking)
								hmsEnd()
								hmsJoint(RM_SURF, RCP_mario_vsign_hand, 60, 0, 0)
							hmsEnd()
						hmsEnd()
					hmsEnd()
				hmsEnd()

			hmsEnd()

			hmsJoint(RM_SURF, NULL, 13, -8, 42)								/* chn15		*/
			hmsBegin()
				hmsJoint(RM_SURF, RCP_mario_far11, 0, 0, 0)					/* m_llegA1		*/
				hmsBegin()
					hmsJoint(RM_SURF, RCP_mario_far10, 89, 0, 0)				/* m_llegB1		*/
					hmsBegin()
						hmsJoint(RM_SURF, RCP_mario_far9, 67, 0, 0)			/* m_lfoot1		*/
					hmsEnd()
				hmsEnd()
			hmsEnd()

			hmsJoint(RM_SURF, NULL, 13, -8, -42)								/* chn17		*/
			hmsBegin()
				hmsJoint(RM_SURF, RCP_mario_far8, 0, 0, 0)					/* m_rlegA1		*/
				hmsBegin()
					hmsJoint(RM_SURF, RCP_mario_far7, 89, 0, 0)				/* m_rlegB1		*/
					hmsBegin()
						hmsJoint(RM_SURF, RCP_mario_far6, 67, 0, 0)			/* m_rfoot1		*/
					hmsEnd()
				hmsEnd()
			hmsEnd()

		hmsEnd()
	hmsEnd()
	hmsReturn()
};

/********************************************************************************/
/*	Far mario hierarchy map data [ Translucent & Transparent ].					*/
/********************************************************************************/
const GeoLayout RCP_FarMarioHierarchy_XLU[] = {
	hmsJoint(RM_XSURF, NULL, 0, 0, 0)										/* chn14		*/
	hmsBegin()
		hmsJoint(RM_XSURF, RCP_mario_far14, 0, 0, 0)						/* m_waist1_3	*/
		hmsBegin()
//  			hmsCProg(0, MarioProc1)
			hmsJoint(RM_XSURF, RCP_mario_far_body, 68, 0, 0)					/* m_body1		*/
			hmsBegin()

				hmsJoint(RM_XSURF, NULL, 87, 0, 0)						/* m_head2		*/
				hmsBegin()
					hmsCProg(0, CtrlMarioHead)
					hmsRotate(0, 0, 0)							/* for control by program	*/
					hmsBegin()
						hmsSelect(0, CtrlMarioEye)				/* for the eye animation	*/
						hmsBegin()
							hmsGfx(RM_XSURF, RCP_mario_far_head1)
							hmsGfx(RM_XSURF, RCP_mario_far_head2)
							hmsGfx(RM_XSURF, RCP_mario_far_head3)
							hmsGfx(RM_XSURF, RCP_mario_far_head4)
							hmsGfx(RM_XSURF, RCP_mario_far_head5)
							hmsGfx(RM_XSURF, RCP_mario_far_head6)
							hmsGfx(RM_XSURF, RCP_mario_far_head7)
							hmsGfx(RM_XSURF, RCP_mario_far_head8)
						hmsEnd()
					hmsEnd()
				hmsEnd()

				hmsJoint(RM_XSURF, NULL, 67, -10, 79)							/* chn6			*/
				hmsBegin()
					hmsJoint(RM_XSURF, RCP_mario_far2, 0, 0, 0)				/* m_larmA1		*/
					hmsBegin()
						hmsJoint(RM_XSURF, RCP_mario_far1, 65, 0, 0)			/* m_larmB1		*/
						hmsBegin()
							hmsSelect(0, CtrlMarioHand)
							hmsBegin()
								hmsJoint(RM_XSURF, RCP_mario_far0 , 60, 0, 0)		/* m_lhamd1		*/
								hmsJoint(RM_XSURF, RCP_swim_hand_l, 60, 0, 0)
								hmsJoint(RM_XSURF, RCP_swim_hand_l, 60, 0, 0)
							hmsEnd()
						hmsEnd()
					hmsEnd()
				hmsEnd()

				hmsJoint(RM_XSURF, NULL, 68, -10, -79)						/* chn10		*/
				hmsBegin()
					hmsJoint(RM_XSURF, RCP_mario_far5, 0, 0, 0)				/* m_rarmA1		*/
					hmsBegin()
						hmsJoint(RM_XSURF, RCP_mario_far4, 65, 0, 0)			/* m_rarmB1		*/
						hmsBegin()
							hmsSelect(0, CtrlMarioHand)
							hmsBegin()
								hmsJoint(RM_XSURF, RCP_mario_far3 , 60, 0, 0)		/* m_rhand1		*/
								hmsBegin()
									hmsSucker(0,0,0, 0,CtrlMarioTaking)
								hmsEnd()
								hmsJoint(RM_XSURF, RCP_swim_hand_r, 60, 0, 0)
								hmsBegin()
									hmsSucker(0,0,0, 0,CtrlMarioTaking)
								hmsEnd()
								hmsJoint(RM_XSURF, RCP_mario_vsign_hand, 60, 0, 0)
							hmsEnd()
						hmsEnd()
					hmsEnd()
				hmsEnd()

			hmsEnd()

			hmsJoint(RM_XSURF, NULL, 13, -8, 42)								/* chn15		*/
			hmsBegin()
				hmsJoint(RM_XSURF, RCP_mario_far11, 0, 0, 0)					/* m_llegA1		*/
				hmsBegin()
					hmsJoint(RM_XSURF, RCP_mario_far10, 89, 0, 0)				/* m_llegB1		*/
					hmsBegin()
						hmsJoint(RM_XSURF, RCP_mario_far9, 67, 0, 0)			/* m_lfoot1		*/
					hmsEnd()
				hmsEnd()
			hmsEnd()

			hmsJoint(RM_XSURF, NULL, 13, -8, -42)								/* chn17		*/
			hmsBegin()
				hmsJoint(RM_XSURF, RCP_mario_far8, 0, 0, 0)					/* m_rlegA1		*/
				hmsBegin()
					hmsJoint(RM_XSURF, RCP_mario_far7, 89, 0, 0)				/* m_rlegB1		*/
					hmsBegin()
						hmsJoint(RM_XSURF, RCP_mario_far6, 67, 0, 0)			/* m_rfoot1		*/
					hmsEnd()
				hmsEnd()
			hmsEnd()

		hmsEnd()
	hmsEnd()
	hmsReturn()
};

const GeoLayout RCP_MarioHierarchy[] = {
 	hmsShadow(100, 180, 99)
	hmsBegin()
		hmsScale(0.25f)
		hmsBegin()
			hmsCProg(0, CtrlMarioAlpha)
			hmsSelect(0, CtrlMarioLOD)
			hmsBegin()

				hmsSelect(0, CtrlMarioRenderMode)
				hmsBegin()
					hmsCall(RCP_NearMarioHierarchy)
					hmsCall(RCP_NearMarioHierarchy_XLU)
					hmsCall(RCP_NearMarioHierarchy)
					hmsCall(RCP_NearMarioHierarchy_XLU)
				hmsEnd()

				hmsGroup()
				hmsBegin()
					hmsLOD(-2048,600)
					hmsBegin()
						hmsSelect(0, CtrlMarioRenderMode)
						hmsBegin()
							hmsCall(RCP_NearMarioHierarchy)
							hmsCall(RCP_NearMarioHierarchy_XLU)
							hmsCall(RCP_NearMarioHierarchy)
							hmsCall(RCP_NearMarioHierarchy_XLU)
						hmsEnd()					
					hmsEnd()

					hmsLOD(600,1600)
					hmsBegin()
						hmsSelect(0, CtrlMarioRenderMode)
						hmsBegin()
							hmsCall(RCP_MidMarioHierarchy)
							hmsCall(RCP_MidMarioHierarchy_XLU)
							hmsCall(RCP_MidMarioHierarchy)
							hmsCall(RCP_MidMarioHierarchy_XLU)
						hmsEnd()					
					hmsEnd()

					hmsLOD(1600,32767)
					hmsBegin()
						hmsSelect(0, CtrlMarioRenderMode)
						hmsBegin()
							hmsCall(RCP_FarMarioHierarchy)
							hmsCall(RCP_FarMarioHierarchy_XLU)
							hmsCall(RCP_FarMarioHierarchy)
							hmsCall(RCP_FarMarioHierarchy_XLU)
						hmsEnd()					
					hmsEnd()
				hmsEnd()
			hmsEnd()
		hmsEnd()
	hmsEnd()
	hmsExit()
};
