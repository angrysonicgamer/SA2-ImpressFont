#pragma once

#include <stdint.h>
#include "ninja.h"
#include "MemAccess.h"
#include "SA2Structs.h"
#include "SA2Enums.h"

#define ObjectFunc(NAME, ADDRESS) FunctionPointer(void,NAME,(ObjectMaster* obj),ADDRESS)
// SA2 Functions
StdcallFunctionPointer(LRESULT, WndProc, (HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam), 0x401810);
ThiscallFunctionPointer(int, CopyString_, (void* _this, const char* Src), 0x401E90);
ThiscallFunctionPointer(void*, CopyString, (void* destination, const void* source, rsize_t size), 0x402250);
StdcallFunctionPointer(BOOL, DialogFunc, (HWND, UINT, WPARAM, LPARAM), 0x403BD0);
ThiscallFunctionPointer(LaunchConfig*, LaunchConfig__dtor, (LaunchConfig* _this, char a2), 0x4052C0);
FunctionPointer(int, GetConfig, (), 0x4052E0);
FunctionPointer(int, Menu_BonusVideo, (), 0x40B410);
FunctionPointer(int, Menu_HowToPlay, (), 0x40C680);
FunctionPointer(int, Menu_Controls, (), 0x40D0F0);
FunctionPointer(int, SteamStatisticsStuff, (), 0x40E880);
StdcallFunctionPointer(int, nullsub_5, (int), 0x411600);
FastcallFunctionPointer(int, LoadPNG, (const char* path), 0x41D490);
FunctionPointer(int, GetCrappyReplacementDepartureMachine, (), 0x41DFB0);
FunctionPointer(int, controller_useless, (), 0x425700);
FunctionPointer(void, MemoryManager__Deallocate, (AllocatedMem* data, char* a2, int a3), 0x425B50);
FunctionPointer(int, PrintDebug, (const char* a1, ...), 0x426740);
FunctionPointer(void, njScale_, (float x, float y, float z), 0x427750);
FunctionPointer(int, njPopMatrixEx, (), 0x429000);
FunctionPointer(int, njPushMatrixEx, (), 0x429710);
VoidFunc(njFogEnable, 0x42A830);
VoidFunc(njFogDisable, 0x42A870);
FastcallFunctionPointer(float, njSin, (Angle angle), 0x42AAB0);
FastcallFunctionPointer(float, njCos, (Angle angle), 0x42AC30);
VoidFunc(ResetRenderSpace, 0x42D340);
FunctionPointer(int, ProcessChunkModel, (NJS_CNK_MODEL* a1), 0x42D650);
FunctionPointer(void, ProcessChunkModelsWithCallback, (NJS_OBJECT* object, int(__cdecl* callback)(NJS_CNK_MODEL*)), 0x42EB30);
ThiscallFunctionPointer(int, njSetTexture, (NJS_TEXLIST* texlist), 0x42ED20);
FastcallFunctionPointer(int, njSetTextureNum, (int id), 0x42ED30);
FunctionPointer(void, LoadTextureList_NoName, (NJS_TEXLIST*), 0x42FD10);
FunctionPointer(void, SetMaterial_Grayscale, (float color), 0x433D00); // Sets each ConstantMaterial elements to "color".
VoidFunc(ResetMaterial, 0x433D40); // Resets ConstantMaterial & 3D controls.
VoidFunc(main_gc_free, 0x433E60);
FunctionPointer(int, GameLoop, (), 0x433EE0);
FunctionPointer(signed int, GameModeHandler, (), 0x434160);
VoidFunc(ResetViewStuff, 0x434CD0);
VoidFunc(main_gc_alloc, 0x434F00);
VoidFunc(InitSoundSystem, 0x435440);
VoidFunc(FreeSoundSystem, 0x435510);
ThiscallFunctionPointer(int, LoadMLT, (const char* name), 0x435880); // Loads csb files in "resource/gd_PC/MLT"
FunctionPointer(void, LoadMPB, (const char* name), 0x435C00); // Loads a 3.csb file in "resource/gd_PC/MPB"
VoidFunc(FreeSoundQueue, 0x435F10);
VoidFunc(ResetSoundSystem, 0x435F80);
FunctionPointer(int, Menu_Unknown_13, (), 0x436040);
ObjectFunc(VibTask_Delete, 0x438C90);
ObjectFunc(VibTask_Main, 0x438D30);
FunctionPointer(int, VibTask_Load, (char, char, char, int, int), 0x438DC0);
FunctionPointer(int, ResetSeedAndCharacter, (), 0x4395C0);
FunctionPointer(signed int, GameStateHandler, (), 0x43A780);
FunctionPointer(int, SetNextLevel, (), 0x43C4D0);
VoidFunc(MissionStartVariableSetup, 0x43C8B0);
VoidFunc(InitCurrentLevelAndScreenCount, 0x43CB10);
VoidFunc(LoadLevelManager, 0x43CB50);
VoidFunc(CallControlAndDoOtherThings, 0x43D240);
FunctionPointer(int, PauseMenu_Main, (), 0x43D310);
FunctionPointer(int, LoadCharacters, (), 0x43D630);
FunctionPointer(void, SetCurrentCharacter1P, (Characters a1), 0x43D850);
FastcallFunctionPointer(void, UpdateMenuInput, (int a1), 0x441AB0);
VoidFunc(Control, 0x441BA0);
VoidFunc(Control_B, 0x441D50);
VoidFunc(WriteAnalogs, 0x441EF0);
FunctionPointer(int, UpdateStaticControllers, (), 0x4421B0);
VoidFunc(UpdateUselessButtonPressBooleans, 0x442390);
ObjectFunc(ADX_TaskLoop_Delete, 0x442850);
ObjectFunc(ADX_TaskLoop, 0x442AD0);
VoidFunc(ResetMusic, 0x442D90);
VoidFunc(StopMusic, 0x442F50);
ObjectFunc(JingleTask_Delete, 0x443320);
ObjectFunc(JingleTask, 0x4433D0);
FunctionPointer(int, ProbablySavesSaveFile, (), 0x4436A0);
FunctionPointer(int, ProbablyLoadsSave, (char), 0x445100);
FunctionPointer(int, SetWorkingSaveD, (), 0x445330);
VoidFunc(SaveConstantAttr, 0x446CB0);
VoidFunc(LoadConstantAttr, 0x446CD0);
VoidFunc(SaveControl3D, 0x446D00);
VoidFunc(LoadControl3D, 0x446D10);
FunctionPointer(BOOL, MSetPosition, (NJS_POINT3* p, NJS_POINT3* v, Angle3* a, float r), 0x446D40); // Move position "p" with direction "v" and angle "a"; outputs in "v" and "a"; handles intersection with any geometry collision in radius "r"; returns whether it touched a collision or not.
FunctionPointer(int, njPushUnitMatrix, (), 0x44B210);
FunctionPointer(void, SetMaterial, (float a, float r, float g, float b), 0x44B2E0); // Sets ConstantMaterial.
ObjectFunc(DrawLine3DExec, 0x44B680);
FunctionPointer(int, Get_dword_1A559C8, (), 0x44BFE0);
FunctionPointer(double, MaybeThisIsDeltaTimeOrSomething, (), 0x44C1A0);
FastcallFunctionPointer(signed int, LoadTextureList, (const char* filename, NJS_TEXLIST* texlist), 0x44C350);
ThiscallFunctionPointer(NJS_TEXLIST*, LoadCharTextures, (const char* filename), 0x44C510);
FunctionPointer(int, SetupGameplayVariables, (), 0x44C8F0);
FunctionPointer(int, GetHandicapThingMaybe, (int id), 0x44CBA0);
ObjectFunc(DispTechniqueScore_Main, 0x44D320);
FunctionPointer(int, DispTechniqueScore_Something, (int), 0x44D360);
ObjectFunc(DispTechniqueScore_Delete, 0x44D8D0);
ObjectFunc(CounterOfDestructedEnemy, 0x44DB80);
ObjectFunc(ScoreWindow, 0x44EEA0);
ObjectFunc(CalcTotalScore, 0x44F7C0);
ObjectFunc(CalcTotalScore_Delete, 0x4505A0);
ObjectFunc(CalcTotalTime, 0x450780);
ObjectFunc(CalcTotalTime_Delete, 0x450F60);
ObjectFunc(NotCalcTotalScore, 0x450F90);
ObjectFunc(DispWinnerAndContinue, 0x451050);
ObjectFunc(DispWinnerAndContinue_Something, 0x451250);
ObjectFunc(DispWinnerAndContinue_Delete, 0x451430);
FunctionPointer(void, LoadResultScreenObjects, (char player), 0x451450);
ObjectFunc(CountDownTimerForTimeLimit2P_Something, 0x4516E0);
ObjectFunc(CountDownTimerForTimeLimit2P, 0x451930);
FunctionPointer(void, CountDownTimerForTimeLimit2P_Load, (char a1), 0x451B00);
ObjectFunc(CountDownTimerForGameOver, 0x451DF0);
ObjectFunc(execTotalBossScore, 0x452400);
ObjectFunc(DisplayTotalRings, 0x453150);
VoidFunc(LoadStageCameraFile, 0x453A90);
ObjectFunc(CardIndicatorExec_Delete, 0x455E40);
ObjectFunc(CardIndicatorExec_Main, 0x456280);
ObjectFunc(CardCloseOperationExec, 0x4566F0);
ObjectFunc(WriteTaskWithWaiting, 0x456820);
ObjectFunc(miniEventExec, 0x4579E0);
FastcallFunctionPointer(void, LoadStoryEntry, (int a1, StoryEntry* story), 0x4589D0);
VoidFunc(Load_PLCOMMTN_Stuff, 0x459370);
ObjectFunc(GamePlayerMissed, 0x46ABD0);
ObjectFunc(DeathZoneObject_Delete, 0x46AD40);
ObjectFunc(DeathZoneObject, 0x46AD50);
ObjectFunc(BreathCounterP, 0x46BC60);
ThiscallFunctionPointer(void, DoNextAction, (int playerNum, char action, int unknown), 0x46BFF0);
ObjectFunc(PlayerSpeedUp_Main, 0x46DF80);
ObjectFunc(PlayerSpeedUp_Delete, 0x46DFC0);
ObjectFunc(PlayerSpeedUp, 0x46E000);
FunctionPointer(Bool, CheckBreakObject, (ObjectMaster* _this, ObjectMaster* other), 0x46EC00);
ObjectFunc(DeleteObject_, 0x46F720);
FunctionPointer(void, RunObjectIndex, (int index), 0x46F8C0);
FunctionPointer(int, RunMostObjects, (), 0x46FBA0);
VoidFunc(UpdateObjects, 0x470010);
FunctionPointer(EntityData1*, AllocateEntityData1, (), 0x470B40);
FunctionPointer(EntityData2*, AllocateEntityData2, (), 0x470B70);
FunctionPointer(ObjUnknownA*, AllocateObjUnknownA, (), 0x470BA0);
FunctionPointer(ObjUnknownB*, AllocateObjUnknownB, (), 0x470BD0);
FunctionPointer(ObjectMaster*, LoadChildObject, (LoadObj a3, void(__cdecl* a4)(ObjectMaster*), ObjectMaster* parent), 0x470C00);
FunctionPointer(task*, CreateChildTask, (LoadObj a3, void(__cdecl* a4)(task*), task* parent), 0x470C00);
ObjectFunc(DeleteChildObjects, 0x470C80);
ObjectFunc(StageNameDisplayExecutor_Main, 0x4724C0);
FunctionPointer(int, DamagePlayer, (EntityData1* data1, CharObj2Base* data2), 0x473800);
ObjectFunc(ExecutePlayerDrawMotionWithAlphaReducing, 0x476BD0);
ObjectFunc(PSubCallSEWithWait, 0x476EA0);
ObjectFunc(LoopSECallForTheMode, 0x476F20);
ObjectFunc(ChaonadeExec, 0x476FD0);
ObjectFunc(PoseEffectMan_Display, 0x477160);
ObjectFunc(PoseEffectMan, 0x4773C0);
ObjectFunc(PoseEffect2PStartMan_Main, 0x4778F0);
FunctionPointer(int, PoseEffect2PStartMan_Load, (), 0x477A80);
ObjectFunc(psExecuteNote, 0x477E70);
FunctionPointer(int, psExecuteNote_Load, (int), 0x477F60);
ObjectFunc(psExecuteFlute_Display, 0x478170);
ObjectFunc(psExecuteFlute, 0x478370);
FunctionPointer(signed int, ScreenFadeIn, (), 0x478690);
FunctionPointer(signed int, ScreenFadeOut, (), 0x4786E0);
FunctionPointer(void, CreateExpParts, (EntityData1* data, NJS_MODEL** model, NJS_TEXLIST* tex), 0x47A5B0); // Explosion effect using a list of models, used by enemies
ObjectFunc(dmyEnemy_Main, 0x47AB30);
FunctionPointer(signed int, LoadLandManager, (LandTable* land), 0x47BD30); // Loads the LandTable Manager with a given LandTable.
FunctionPointer(bool, LoadChunkMap, (const char* bmp_path, ChunkMapColor* color_list, NJS_VECTOR* bound1, NJS_VECTOR* bound2), 0x47BE40); // Loads a flat map of the level as a bmp image to get chunk positions. Each colour represent a bitfield of chunks, bounds are used to translate 3D coordinates to an image pixel.
ObjectFunc(LandManager_Main, 0x47C180);
FunctionPointer(int, GetLandChunksAt, (float x, float z), 0x47C8D0); // Returns visible chunks at X and Z coordinates.
VoidFunc(ListGroundForDrawing, 0x47CAE0); // Determines landtable entries to draw based on players position and on visible chunks in LandDisplayEntries.
FunctionPointer(void, ListGroundForCollision, (float x, float y, float z, float radius), 0x47CD60); // Finds dynamic collisions within radius and fills LandColList and LandColList_Count.
FunctionPointer(NJS_OBJECT*, GetFreeDyncolObjectEntry, (), 0x47D7F0); // Returns an NJS_OBJECT to be used with DynCol_Add.
FunctionPointer(int, ResetGravity, (), 0x47D880);
FunctionPointer(void, CheckCollision, (ObjectMaster* entity, ObjectMaster* test), 0x485850); // Checks shape collision intersection between two entities.
VoidFunc(RunPlayerCollision, 0x485920);
VoidFunc(RunProjectileCollisionn, 0x485B20);
VoidFunc(RunChaoCollision, 0x485C70);
VoidFunc(RunEnemyCollision, 0x485E10);
VoidFunc(RunRegularCollision, 0x485EF0);
VoidFunc(ClearCollisionLists, 0x485FD0);
VoidFunc(RunObjectCollisions, 0x486190);
ObjectFunc(Extra_Exec_Main, 0x487390);
FunctionPointer(signed int, LoadSetObject, (ObjectListHead* list, void* setfile), 0x487E40); // Loads the SET Manager with given Objectlist and SETFile data.
FunctionPointer(int, DeleteSetObject, (), 0x487F00);
ObjectFunc(SetObject_Delete, 0x487F20);
ObjectFunc(SetObject_Main, 0x487F60);
FunctionPointer(int, ByteswapSETFile, (), 0x487FC0);
VoidFunc(ReadSET_2P, 0x4883D0); // Loads SET objects around P1 & P2.
VoidFunc(ReadSET_1P, 0x488630); // Loads SET objects around P1.
VoidFunc(CountPerfectRings, 0x4890E0); // Counts the amount of rings in the SET.
ObjectFunc(MinimalCounterExecutor, 0x489240);
ObjectFunc(MinimalCaptureEffect_Exec, 0x489650);
ObjectFunc(Minimal_Exec, 0x4898B0);
FunctionPointer(ObjectMaster*, SpawnMinimal, (float posx, float posy, float posz, int type, int behaviour), 0x48AAD0);
FunctionPointer(ObjectMaster*, Enemy_SpawnMinimal, (float posx, float posy, float posz), 0x48AD10);
FunctionPointer(void, CL_ColPolListUpNear, (csts* ctp), 0x48BAF0); // Finds dynamic collisions within the csts input position and radius.
FunctionPointer(int, ChaosDrive_Unknown, (int), 0x48F0E0);
ObjectFunc(ChaosDrive_Delete, 0x48F7C0);
ObjectFunc(ChaosDrive_Load2, 0x48F810);
ThiscallFunctionPointer(unsigned int, PRSDec, (unsigned __int8* src, uint8_t* dst), 0x48F980);
FunctionPointer(signed int, LoadStagePaths, (LoopHead** list), 0x490110);
FunctionPointer(void, LoadPathObjects, (LoopHead** list), 0x490180);
FunctionPointer(void, CalcPathTbl, (LoopHead* path, int index, pathtbl* pt), 0x4902A0); // Outputs path information at index in pt.
FunctionPointer(bool, GetPathStatus, (LoopHead* path, PathInfo* pi), 0x4905A0); // Outputs path information in pi based on pi->onpathpos.
FunctionPointer(double, CheckPathIntersect, (LoopHead* path, NJS_VECTOR* point, NJS_VECTOR* intersec_point, float* onpathpos), 0x490E40); // Checks intersection between path and point. Outputs: intersec_point, onpathpos. Returns perpendcular distance from intersec_point.
ObjectFunc(ParticleCoreTask_Load, 0x491C20);
FunctionPointer(double, GetGroundHeight, (float x, float y, float z, Rotation* out_rotation), 0x494C30);
ObjectFunc(MissionMessageDisplayerExecutor, 0x496B60);
ObjectFunc(LoopPath, 0x497B50);
ObjectFunc(RailPath, 0x4980C0);
ObjectFunc(RailPath_Inverted, 0x498140);
FunctionPointer(int, LoadBossLast2Module, (), 0x498890);
VoidFunc(FinalHazard_Init, 0x4988A0);
ObjectFunc(LastBoss2Exec, 0x49A640);
ObjectFunc(ManTex_Delete, 0x49A930);
FunctionPointer(int, LoadSuperSonic, (), 0x49A950);
FunctionPointer(int, LoadSuperShadow, (), 0x49ABB0);
ObjectFunc(SuperSonic_Main, 0x49AE10);
ObjectFunc(Super_Delete, 0x49BEC0);
ObjectFunc(Super_Display, 0x49CA60);
ObjectFunc(Super_Something, 0x49CD50);
FunctionPointer(int, LastBossBoundary, (), 0x49E140);
ObjectFunc(LastBossPlayerManager, 0x49E520);
ObjectFunc(LastBossPlayerManager_Delete, 0x49ECC0);
FunctionPointer(int, LastBossPlayerManager_Load, (), 0x49ECE0);
ObjectFunc(HosiExec_1, 0x49EFA0);
ObjectFunc(BL2IkuraSmokeExec, 0x4A11A0);
ObjectFunc(BL2WeakPtclExec, 0x4A47D0);
FunctionPointer(int, LoadBossGolemeModule, (), 0x4A5230);
VoidFunc(EggGolemE_Init, 0x4A5240);
ObjectFunc(BossGolemExec_1, 0x4A5DD0);
VoidFunc(LoadEggGolemECharAnims, 0x4A6DC0);
ObjectFunc(ObjectAshibaExec_1, 0x4A7350);
ObjectFunc(GolemWeakExec, 0x4A9D80);
FunctionPointer(int, LoadStg30Module, (), 0x4AC7C0);
FunctionPointer(int, FinalRush_Init, (), 0x4AC7D0);
ObjectFunc(BgExec_01, 0x4ACDB0);
ObjectFunc(ObjectBurst, 0x4AE830);
ObjectFunc(ObjectMeteoFall_stg30, 0x4AFBB0);
VoidFunc(LoadFinalRushCharAnims, 0x4AFE00);
FunctionPointer(int, LoadStg05Module, (), 0x4B3760);
FunctionPointer(int, PumpkinHill_Init, (), 0x4B3770);
ObjectFunc(ObjSetManExec_1, 0x4B3E30);
VoidFunc(LoadPumpkinHillCharAnims, 0x4B4230);
FunctionPointer(signed int, TIM, (ObjectMaster* a1), 0x4B4410);
FunctionPointer(int, KUSA, (ObjectMaster* a1), 0x4B4470);
FunctionPointer(int, KAKASI, (ObjectMaster* a1), 0x4B44D0);
FunctionPointer(int, FENCES, (ObjectMaster* a1), 0x4B4540);
FunctionPointer(int, FENCE, (ObjectMaster* a1), 0x4B45B0);
FunctionPointer(int, WOODEAD, (ObjectMaster* a1), 0x4B4610);
FunctionPointer(int, SmallPumpkin, (ObjectMaster* a1), 0x4B46C0);
FunctionPointer(int, BigPumpkin, (ObjectMaster* a1), 0x4B4770);
FunctionPointer(int, FIRZIZ, (ObjectMaster* a1), 0x4B4BC0);
ObjectFunc(JizooFireExec_1, 0x4B53B0);
FunctionPointer(int, PICPUM1, (ObjectMaster* a1), 0x4B5540);
FunctionPointer(int, GSGATE, (ObjectMaster* a1), 0x4B5940);
FunctionPointer(int, PUMSASI, (ObjectMaster* parent), 0x4B5980);
FunctionPointer(int, PUMWALL, (int), 0x4B5A00);
FunctionPointer(int, Terminal, (ObjectMaster* a2), 0x4B6270);
FunctionPointer(int, PPSHED, (ObjectMaster* a1), 0x4B6D60);
ObjectFunc(GSTRAIN, 0x4B77F0);
FunctionPointer(int, Gravestone, (ObjectMaster* a2), 0x4B9400);
FunctionPointer(int, LoadStg41Module, (), 0x4B9840);
FunctionPointer(int, WildCanyon2P_Init, (), 0x4B9850);
ObjectFunc(BgExec_02, 0x4B9FB0);
ObjectFunc(BgClip_01, 0x4BA350);
ObjectFunc(CalcLightForPlayer_1, 0x4BA490);
FunctionPointer(int, LoadStg56Module, (), 0x4BA680);
FunctionPointer(int, EternalEngine2P_Init, (), 0x4BA690);
FunctionPointer(int, LoadBossGolemModule, (), 0x4BADF0);
VoidFunc(EggGolem_Init, 0x4BAE20);
ObjectFunc(ObjectGolemUdreel, 0x4BB5D0);
ObjectFunc(ObjectAshibaExec_2, 0x4BD260);
ObjectFunc(AshibaBrokenPartsExec, 0x4BE010);
ObjectFunc(BossGolemExec_2, 0x4BE720);
VoidFunc(LoadEggGolemCharAnims, 0x4C2410);
ObjectFunc(EffectExplosionExec, 0x4C6D00);
FunctionPointer(int, LoadStg42Module, (), 0x4C70F0);
FunctionPointer(int, SonicVsShadow2_Init, (), 0x4C7100);
ObjectFunc(ControlShadow_Main, 0x4C7ED0);
FunctionPointer(int, FIREBALL, (ObjectMaster* a1), 0x4C90B0);
ObjectFunc(ObjectSS2Dodai, 0x4C9A10);
FunctionPointer(int, DODAIGEN, (int), 0x4C9DA0);
FunctionPointer(int, LoadStg34Module, (), 0x4CA020);
FunctionPointer(int, CannonsCoreSonic_Init, (), 0x4CA030);
ObjectFunc(BgClip_02, 0x4CA800);
FunctionPointer(int, G_LIGHT_SW, (ObjectMaster* a1), 0x4CA9B0);
ObjectFunc(ObjectGlobalLightManager, 0x4CAB20);
VoidFunc(LoadCannonsCoreSCharAnims, 0x4CABA0);
ObjectFunc(BgExec_03, 0x4CAE90);
ObjectFunc(DenkiColi, 0x4CD070);
ObjectFunc(InputColi, 0x4CD220);
FunctionPointer(int, BLOCK, (ObjectMaster* a1), 0x4CE240);
ObjectFunc(BgColi, 0x4CF130);
FunctionPointer(int, BLOCK2, (ObjectMaster* a1), 0x4CF370);
ObjectFunc(CC_SWITCH, 0x4D1A40);
ObjectFunc(CountDownTimerManagerTaskExec, 0x4D2D50);
ObjectFunc(VibSlightExec, 0x4D4300);
FunctionPointer(int, VibSlightExec_Load, (), 0x4D4350);
FunctionPointer(int, LoadStg07Module, (), 0x4D43D0);
FunctionPointer(int, AquaticMine_Init, (), 0x4D43E0);
ObjectFunc(BgExec_04, 0x4D4A70);
VoidFunc(LoadAquaticMineCharAnims, 0x4D4C30);
ObjectFunc(SuimenManager, 0x4D51B0);
ObjectFunc(MizugomiExec_1, 0x4D6530);
FunctionPointer(int, mitruckp, (ObjectMaster* a1), 0x4D68A0);
FunctionPointer(int, mikusa, (ObjectMaster* a1), 0x4D6900);
FunctionPointer(int, mirail, (ObjectMaster* a1), 0x4D69C0);
FunctionPointer(int, mifence, (ObjectMaster* a1), 0x4D6A70);
FunctionPointer(int, NOCOLSKULL, (ObjectMaster* a1), 0x4D6CF0);
FunctionPointer(int, mizukusa, (ObjectMaster* a1), 0x4D78B0);
FunctionPointer(int, mitruck, (ObjectMaster* a1), 0x4D7AB0);
FunctionPointer(int, milump, (ObjectMaster* a1), 0x4D80B0);
FunctionPointer(int, miwood, (int), 0x4D8450);
FunctionPointer(int, miwoody, (int), 0x4D8470);
FunctionPointer(int, FIRZIZ_0, (ObjectMaster* a1), 0x4D8A00);
FunctionPointer(int, DRMCUN, (ObjectMaster* a1), 0x4D9BD0);
FunctionPointer(int, CMDOOR, (ObjectMaster* a1), 0x4DA360);
FunctionPointer(int, SIGN, (ObjectMaster* a1), 0x4DA440);
FunctionPointer(int, LoadStg37Module, (), 0x4DB110);
VoidFunc(CannonsCoreRouge_Init, 0x4DB120);
ObjectFunc(BgClip_03, 0x4DB740);
ObjectFunc(BgColiExec, 0x4DB840);
ObjectFunc(BgExec_05, 0x4DB860);
ObjectFunc(BubbleExec, 0x4DCBB0);
ObjectFunc(FallColi, 0x4DCDF0);
ObjectFunc(BgAnimeExec, 0x4DCF00);
ObjectFunc(BgCoverOpenExec, 0x4DD470);
VoidFunc(LoadCannonsCoreRCharAnims, 0x4DDA70);
FunctionPointer(int, LoadStg47Module, (), 0x4DDC50);
VoidFunc(PyramidRace_Init, 0x4DDC70);
FunctionPointer(int, WALL, (ObjectMaster* a1), 0x4DE2C0);
FunctionPointer(int, LoadStg14Module, (), 0x4DE920);
ObjectFunc(BgExec_06, 0x4DEDD0);
ObjectFunc(BgmStart_RadicalHighway, 0x4DEFF0);
VoidFunc(LoadRadicalHighwayCharAnims, 0x4DF070);
FunctionPointer(int, LoadStg46Module, (), 0x4E4F50);
FunctionPointer(int, DryLagoon2P_Init, (), 0x4E4F70);
ObjectFunc(Bg3Exec, 0x4E5AC0);
ObjectFunc(BgClip_04, 0x4E5C50);
VoidFunc(LoadDryLagoon2PCharAnims, 0x4E63D0);
FunctionPointer(int, LIGHTING, (ObjectMaster* a1), 0x4E65B0);
FunctionPointer(int, BUTTERFLY_F, (ObjectMaster* a1), 0x4E66E0);
FunctionPointer(int, LoadStg40Module, (), 0x4E6C50);
FunctionPointer(int, FinalChase_Init, (), 0x4E6C70);
ObjectFunc(BgExec_07, 0x4E71D0);
ObjectFunc(ObjectMeteoFall_stg40, 0x4E80F0);
VoidFunc(LoadFinalChaseCharAnims, 0x4E8710);
ObjectFunc(ManGCylExecutor_Delete, 0x4E9490);
FunctionPointer(int, ResetArbitraryGravity, (int), 0x4E94B0);
ObjectFunc(ManGCylExecutor_Main, 0x4E9510);
FunctionPointer(int, ManGCylExecutor_Load, (), 0x4E9570);
FunctionPointer(void, InitSplitscreen, (int num), 0x4EB2B0);
VoidFunc(CameraSetGlobalLocation, 0x4EB650); // Set CameraPos, CameraAng, CameraDir, CameraTgt and CameraSpd with information from current camera
VoidFunc(RunCameraShake, 0x4EB6E0); // Run current camera shake
ObjectFunc(cameraCons_Display, 0x4EB8A0);
ObjectFunc(cameraCons_Main, 0x4EB8E0);
ObjectFunc(cameraCons_Delete, 0x4EBA40);
ObjectFunc(cameraCons, 0x4EBA50);
FunctionPointer(int, CameraDebug_BOSSINIT, (int, int), 0x4EBF70);
VoidFunc(RunCameraTarget, 0x4EC520); // Set camera direction, see CameraTargetMode
VoidFunc(CameraUpdateFOV, 0x4EC920);
VoidFunc(RunCameraCollision, 0x4EC9A0); // Run collision for current camera
FunctionPointer(int, CameraDebug_COLLISION, (int, int), 0x4ECFC0);
FunctionPointer(int, CameraDebug_BOSSPOINT, (int, int), 0x4ED5F0);
FunctionPointer(int, CameraDebug_BOSSKLAMATH, (), 0x4ED840);
FunctionPointer(int, CameraDebug_COLLI_LR, (int, int), 0x4ED8C0);
FunctionPointer(int, CameraDebug_KNUCKLES_L, (int, int), 0x4EDAE0);
VoidFunc(DoThingForEveryScreen, 0x4F0730);
FunctionPointer(int, CameraDebug_EASYSET, (int, int), 0x4F16C0);
FunctionPointer(int, CameraDebug_KLAMATH, (int, int), 0x4F1810);
FunctionPointer(int, CameraDebug_MOTION, (int, int), 0x4F2070);
FunctionPointer(int, CameraDebug_CARMEL, (int, int), 0x4F2B10);
FunctionPointer(int, CameraDebug_INIT, (int, int), 0x4F32C0);
FunctionPointer(int, CameraDebug_SPACE, (int, int), 0x4F39E0);
FunctionPointer(int, CameraDebug_POINT, (int, int), 0x4F3A90);
FunctionPointer(int, CameraDebug_EDITOR2, (int), 0x4F3BF0);
FunctionPointer(int, CameraDebug_FIX2, (int, int), 0x4F3DB0);
FunctionPointer(int, CameraDebug_SS, (int, int), 0x4F45C0);
FunctionPointer(int, CameraDebug_EDITOR, (int, int), 0x4F47F0);
FunctionPointer(int, CameraDebug_FIX, (int, int), 0x4F51E0);
FunctionPointer(int, CameraDebug_ASHLAND, (int, int), 0x4F52F0);
FunctionPointer(int, CameraDebug_LEAVE, (int, int), 0x4F53D0);
FunctionPointer(int, CameraDebug_GAKUGAKU, (int, int), 0x4F54C0);
FunctionPointer(int, CameraDebug_KNUCKLES, (void* a1), 0x4F5760);
FunctionPointer(int, CameraDebug_SNAPSHOT, (), 0x4F58C0);
FunctionPointer(int, Big_Main, (ObjectMaster* a1), 0x4F61E0);
ObjectFunc(exec_1, 0x4F7020);
FunctionPointer(int, E_NAMIE, (ObjectMaster* a1), 0x4F8F90);
FunctionPointer(int, E_SHOUKO, (int a1), 0x4F9F00);
FunctionPointer(int, E_SW_SHOUKO, (ObjectMaster* a1), 0x4FA070);
ObjectFunc(EnemyShoukoBulletExecutor, 0x4FA260);
ObjectFunc(EnemyShoukoBombExecutor, 0x4FAA90);
FunctionPointer(int, E_KYOKO, (ObjectMaster* a1), 0x4FC700);
FunctionPointer(int, E_AI, (int a1), 0x4FF990);
ObjectFunc(Beetle_Main, 0x501530);
ObjectFunc(E_GHOST, 0x503140);
FunctionPointer(int, E_PATH, (ObjectMaster* a1), 0x505C20);
FunctionPointer(int, E_GOLD, (int a1), 0x506510);
FunctionPointer(int, E_CHAOS, (ObjectMaster* a1), 0x50A850);
FunctionPointer(int, E_PATHCHAOS, (int a1), 0x50C3F0);
FunctionPointer(int, E_1000, (ObjectMaster* a1), 0x50D790);
ObjectFunc(E_SARU, 0x50E4D0);
FunctionPointer(int, E_UNI, (int a1), 0x50F150);
ObjectFunc(SparkExecute, 0x50FD10);
ObjectFunc(EnemyLaserExecutor, 0x510560);
ObjectFunc(EnemyLightExecutor, 0x510FF0);
ObjectFunc(EnemyJetExecutor, 0x5112C0);
ObjectFunc(EnemyBulletExecutor, 0x511AB0);
ObjectFunc(EnemyCapturingBulletExecutor, 0x512570);
ObjectFunc(EnemyCapturingBulletPiecesExecutor, 0x512930);
ObjectFunc(Bomb_Main, 0x513830);
FunctionPointer(int, LoadStg35Module, (), 0x514190);
VoidFunc(CannonsCoreEggman_Init, 0x5141A0);
ObjectFunc(BgExec_08, 0x515180);
ObjectFunc(BgClip_05, 0x517ED0);
FunctionPointer(int, LoadStg54Module, (), 0x5180D0);
FunctionPointer(int, GrindRace_Init, (), 0x518140);
ObjectFunc(BgmStart_GrindRace, 0x518720);
ObjectFunc(BgClip_06, 0x518AF0);
FunctionPointer(int, LoadTitleModule, (), 0x519080);
ObjectFunc(DisplayTaikenAlert, 0x519CA0);
ObjectFunc(DisplayTaikenComingSoon, 0x519E40);
ObjectFunc(DisplayLogo, 0x51A2D0);
ObjectFunc(DisplayTitle, 0x51A670);
ObjectFunc(DisplayWHFTitle, 0x51B810);
FunctionPointer(int, DisplayNSWTitle_Load, (), 0x51BA00);
ObjectFunc(DisplayNSWTitle, 0x51BB80);
FunctionPointer(int, LoadStg45Module, (), 0x51C8C0);
FunctionPointer(int, SandOcean2P_Init, (), 0x51C8D0);
ObjectFunc(BgmStart_SandOcean, 0x51CD80);
VoidFunc(LoadSandOcean2PCharAnims, 0x51D020);
FunctionPointer(int, LoadStg52Module, (), 0x51D870);
FunctionPointer(int, DowntownRace_Init, (), 0x51D880);
ObjectFunc(BgmStart_DowntownRace, 0x51DD20);
FunctionPointer(int, LoadBossLast1Module, (), 0x51DE80);
FunctionPointer(int, Biolizard_Init, (), 0x51DE90);
ObjectFunc(BL1DefendPikaExec, 0x51E720);
ObjectFunc(BL1DefendCtlExec, 0x51EA00);
FunctionPointer(int, LoadBiolizard, (), 0x51EC90);
ObjectFunc(LastBoss1Exec, 0x521750);
VoidFunc(LoadBiolizardCharAnims, 0x521DB0);
ObjectFunc(SmokeExec_1, 0x525A70);
ObjectFunc(BL2BossPointCameraExec, 0x527530);
ObjectFunc(BL1BreathExec, 0x5289A0);
FunctionPointer(int, LoadStg58Module, (), 0x5295F0);
FunctionPointer(int, IronGate2P_Init, (), 0x529600);
ObjectFunc(BgmStart_IronGate, 0x529A90);
ObjectFunc(LightBombExec_1, 0x529B10);
VoidFunc(LoadChaomainModule, 0x52AB10);
FunctionPointer(int, ChaoMain_Constructor, (), 0x52AB60);
FunctionPointer(int, GetCurrentChaoStage, (), 0x52B5A0);
ObjectFunc(AL_PlayerControlManager, 0x52B750);
FunctionPointer(int, LoadChaoRaceModule, (), 0x52BAE0);
ObjectFunc(AL_RaceMaster, 0x52D1C0);
FunctionPointer(int, LoadChaoKarateModule, (), 0x52D6E0);
ObjectFunc(AL_KarateMaster, 0x52D990);
ObjectFunc(FExec_1, 0x52DD90);
FunctionPointer(char*, GetChaoSavePointer, (), 0x52E440);
FunctionPointer(int, GetChaoSavePointer_, (), 0x52E460);
ThiscallFunctionPointer(bool, CheckChaoChecksum, (char* data), 0x52F030);
ObjectFunc(FExec_2, 0x52FC60);
ObjectFunc(ALW_Control_Main, 0x530850);
ObjectFunc(ALW_Control_Display, 0x530B00);
ObjectFunc(ALW_Control_Delete, 0x530B70);
FunctionPointer(int, SpawnAllChaoInGarden, (), 0x531B10);
VoidFunc(AL_LoadVoices, 0x5320B0);
FunctionPointer(int, AL_GBAManagerExecutor_Load, (), 0x532710);
ObjectFunc(AL_GBAManagerExecutor, 0x532A60);
ObjectFunc(AL_GBAManagerExecutor_Delete, 0x532C70);
ObjectFunc(AL_EntranceMenuManagerExecutor, 0x533100);
VoidFunc(AL_LoadPalette, 0x534350);
ObjectFunc(ALO_StageTitleExec_Delete, 0x535110);
FunctionPointer(int, ALO_StageTitleExec_Unknown, (int), 0x535130);
ObjectFunc(ALO_StageTitleExec_Main, 0x535190);
FunctionPointer(void, ALO_StageTitleExec_Load, (int a2, int a3), 0x5352D0);
ObjectFunc(ALR_ADV_CongraManagerExecutor, 0x5371F0);
ObjectFunc(FExec_3, 0x537480);
ObjectFunc(ALR_CameraManager, 0x538110);
ObjectFunc(ALR_ADV_GoalManagerExecutor, 0x5394E0);
ObjectFunc(ALR_ADV_MapManagerExecutor, 0x5398A0);
ObjectFunc(ToyPresenterExecutor, 0x539C80);
ObjectFunc(ALR_ADV_StartManagerExecutor, 0x53A670);
ObjectFunc(ALO_RacePitfallExecutor_Main, 0x53AB00);
ObjectFunc(ALO_RacePitfallExecutor_Display, 0x53ABB0);
FunctionPointer(int, ALO_RacePitfallExecutor_Load, (), 0x53AC20);
ObjectFunc(ALO_RaceKarimonoQuestionPanelExecutor_Main, 0x53AD10);
ObjectFunc(ALO_RaceKarimonoQuestionPanelExecutor_Display, 0x53ADB0);
ObjectFunc(FallObjectExecutor_Main, 0x53AE10);
FunctionPointer(float*, FallObjectExecutor_Load, (NJS_VECTOR* a1), 0x53B0A0);
ObjectFunc(ALO_RaceKarimonoAnswerPanelExecutor_Main, 0x53B220);
ObjectFunc(ALO_RaceKarimonoAnswerPanelExecutor_Display, 0x53B4D0);
FunctionPointer(int, ALO_RaceKarimonoQuestionPanelExecutor_Load, (), 0x53B530);
ObjectFunc(ALR_ADV_TryAgainManagerExecutor, 0x53ECF0);
ObjectFunc(j_Chao_Display, 0x53FCE0);
ObjectFunc(AL_ExecShadowTex, 0x5412E0);
ObjectFunc(KarateMainExec, 0x542DA0);
ObjectFunc(FExec_4, 0x5436B0);
ObjectFunc(ALO_ChaosDriveExecutor_Main, 0x5450C0);
ObjectFunc(ALO_ChaosDriveExecutor_Display, 0x545150);
FunctionPointer(int, ALO_ChaosDriveExecutor_Unknown, (int), 0x545430);
ObjectFunc(ALO_ChaosDriveExecutor_Delete, 0x5455B0);
FunctionPointer(ObjectMaster*, ALO_ChaosDriveExecutor_Load, (unsigned __int8 a1, NJS_VECTOR* position, NJS_VECTOR* idkvector, ChaoData* a4), 0x545600);
ObjectFunc(ALO_FruitExecutor_Main, 0x545E40);
ObjectFunc(ALO_FruitExecutor_Display, 0x545EE0);
FunctionPointer(ObjectMaster*, ALO_FruitExecutor_Load, (int a1, NJS_VECTOR* position, Angle angle, NJS_VECTOR* a4, ChaoData* a5), 0x546180);
ObjectFunc(ALO_GrowTreeExecutor_Main, 0x546810);
ObjectFunc(ALO_GrowTreeExecutor_Display, 0x547E70);
ObjectFunc(ALO_GrowTreeExecutor_Delete, 0x5481E0);
FunctionPointer(int, ALO_GrowTreeExecutor_Load, (int, int), 0x548210);
ObjectFunc(AL_MinimalExecutor_Display, 0x5489D0);
ObjectFunc(AL_MinimalExecutor_Delete, 0x548C30);
ObjectFunc(AL_MinimalExecutor_Main, 0x548C50);
FunctionPointer(ObjectMaster*, AL_MinimalExecutor_Load, (char a1, NJS_VECTOR* a2, int a3, void* a4, int a5), 0x548D30);
ObjectFunc(AL_MinimalCreateManagerExecutor, 0x5492B0);
ObjectFunc(ALO_SeedExecutor_Main, 0x549860);
ObjectFunc(ALO_SeedExecutor_Display, 0x5498E0);
FunctionPointer(ObjectMaster*, ALO_SeedExecutor_Load, (int a1, NJS_VECTOR* position, NJS_VECTOR* a3, int a4), 0x549B00);
FastcallFunctionPointer(int, CalcChaoSaveChecksum, (char* a1), 0x549C40);
ObjectFunc(ALO_ObakeHeadExecutor_Main, 0x54A050);
ObjectFunc(ALO_ObakeHeadExecutor_Display, 0x54A0F0);
FunctionPointer(ObjectMaster*, ALO_ObakeHeadExecutor_Load, (int a1, NJS_VECTOR* position, int a3, NJS_VECTOR* a4, int a5), 0x54A540);
FunctionPointer(int, ChaoStgDark_Prolog, (), 0x54B420);
ObjectFunc(AL_DarkGardenMaster, 0x54B730);
ObjectFunc(AL_OdekakeStage, 0x54BCE0);
FunctionPointer(int, ChaoStgLobby_Prolog, (), 0x54BFB0);
ObjectFunc(AL_LobbyMaster, 0x54C2A0);
FunctionPointer(int, ChaoStgNeut_Prolog, (), 0x54C4F0);
ObjectFunc(AL_NeutGardenMaster, 0x54C7B0);
FunctionPointer(int, ChaoStgHero_Prolog, (), 0x54CCE0);
ObjectFunc(AL_HeroGardenMaster, 0x54D210);
ObjectFunc(AL_EntranceMaster, 0x54DAD0);
ObjectFunc(AL_StadiumMaster, 0x54E010);
ObjectFunc(AlgKinderMaster, 0x54E780);
ObjectFunc(Chao_Main, 0x54FE20);
ObjectFunc(Chao_Delete, 0x54FF30);
ObjectFunc(Chao_Display, 0x54FF80);
FunctionPointer(ObjectMaster*, CreateChao, (ChaoData* chaoData, int a2, void* a3, NJS_VECTOR* position, Angle angle), 0x5501D0);
ObjectFunc(ChaoSelectMenuManager, 0x5542B0);
ObjectFunc(ALO_EntranceElevatorExecutor_Main, 0x557FC0);
ObjectFunc(ALO_EntranceElevatorExecutor_Display, 0x558350);
ObjectFunc(ALO_EntranceElevatorExecutor_Delete, 0x5584C0);
FunctionPointer(int, ALO_EntranceElevatorExecutor_Load, (), 0x558510);
ObjectFunc(ALO_RaceFruit_Main2, 0x55A290);
ObjectFunc(ALO_RaceFruit_Display, 0x55A2F0);
ObjectFunc(ALO_RaceFruit_Main, 0x55A560);
FunctionPointer(int, ALO_RaceFruit_Load, (int), 0x55A5E0);
ObjectFunc(AL_FieldExecutor_Main, 0x55A6A0);
ObjectFunc(AL_FieldExecutor_Display, 0x55A6D0);
FunctionPointer(ObjectMaster*, AL_FieldExecutor_Load, (char a1, NJS_VECTOR* a2, float a3, int a4), 0x55A850);
ObjectFunc(ALO_TVExecutor_Main, 0x55C540);
ObjectFunc(ALO_TVExecutor_Display, 0x55C9E0);
ObjectFunc(ALO_TVExecutor_Delete, 0x55CB70);
FunctionPointer(void, ALO_TVExecutor_Load, (NJS_VECTOR* position), 0x55CB90);
ObjectFunc(ALO_Ball_Main2, 0x55D310);
ObjectFunc(ALO_Ball_Display, 0x55D3B0);
ObjectFunc(ALO_Ball_Main, 0x55D640);
FunctionPointer(char*, ALO_Ball_Load, (NJS_VECTOR* position, NJS_VECTOR* a2), 0x55D6B0);
ObjectFunc(ALO_ShabonExecutor_Display, 0x55D830);
ObjectFunc(ALO_ShabonExecutor_Main, 0x55D960);
ObjectFunc(BookExecutor, 0x55DF90);
ObjectFunc(ALO_RaceKariToy_Main2, 0x5601C0);
ObjectFunc(ALO_RaceKariToy_Display, 0x560220);
ObjectFunc(ALO_RaceKariToy_Main, 0x560470);
FunctionPointer(int, ALO_RaceKariToy_Load, (char, int, int, int), 0x5604F0);
ObjectFunc(ParamFukidasiExecutor, 0x564C80);
ObjectFunc(WaterManagerExecutor, 0x56AF60);
ObjectFunc(CnkWaterManagerExecutor, 0x56B1B0);
FunctionPointer(int, SetChunkTextureIndex, (int), 0x56E3D0);
ObjectFunc(KarateCameraExec, 0x574480);
ObjectFunc(KarateChaoExec_Main, 0x578D30);
ObjectFunc(EGG, 0x57B520);
ObjectFunc(ALO_Delete, 0x57B9B0);
FunctionPointer(ObjectMaster*, CreateChaoEgg, (const void* a1, ChaoData* chaoData, int a3, NJS_VECTOR* position, int a5), 0x57B9C0);
ObjectFunc(ALO_RadicaseExecutor_Main, 0x57C840);
ObjectFunc(ALO_RadicaseExecutor_Display, 0x57CA80);
ObjectFunc(ALO_RadicaseExecutor_Delete, 0x57CC80);
FunctionPointer(int, ALO_RadicaseExecutor_Load, (int), 0x57CCA0);
ObjectFunc(AL_NormalCameraExecutor_Main, 0x57CD50);
FunctionPointer(int, AL_NormalCameraExecutor_Load, (), 0x57D2E0);
ObjectFunc(ALCAM_CameraManagerExecutor, 0x57D400);
ObjectFunc(ALO_OdekakeMachine_Main2, 0x57D540);
ObjectFunc(ALO_OdekakeMachine_Delete, 0x57E040);
ObjectFunc(ALO_OdekakeMachine_Display, 0x57E060);
ObjectFunc(ALO_OdekakeMachine_Main, 0x57E460);
ObjectFunc(AL_OdekakeMenuMaster, 0x57E5F0);
ObjectFunc(FExec_5, 0x57EDD0);
ObjectFunc(ALO_LobbyGateKinderExecutor, 0x57EF00);
ObjectFunc(ALO_LobbyGateKinderExecutor_Display, 0x57EF30);
ObjectFunc(ALO_LobbyExitExecutor, 0x57F0E0);
ObjectFunc(ALO_LobbyGateNeutExecutor, 0x57F780);
ObjectFunc(ALO_LobbyGateNeutExecutor_Display, 0x57F7B0);
ObjectFunc(ALO_LobbyGateHeroExecutor_Main, 0x57F940);
ObjectFunc(ALO_LobbyGateHeroExecutor_Display, 0x57F980);
ObjectFunc(ALO_LobbyGateDarkExecutor_Main, 0x57FD60);
ObjectFunc(ALO_LobbyGateDarkExecutor_Display, 0x57FDF0);
ObjectFunc(ALO_BoxExecutor_Main, 0x5801C0);
ObjectFunc(ALO_BoxExecutor_Display, 0x580510);
ObjectFunc(ALO_BoxExecutor_Delete, 0x580870);
FunctionPointer(void, ALO_BoxExecutor_Load, (NJS_VECTOR* position), 0x580890);
ObjectFunc(ALO_Horse_Main, 0x580E80);
FunctionPointer(int, ALO_Horse_Load, (), 0x580F30);
FunctionPointer(int, ALO_EntranceLampExecutor_Unknown, (int), 0x580F90);
ObjectFunc(ALO_EntranceLampManager_Main, 0x581020);
FunctionPointer(int, ALO_EntranceLamp_Load, (float, float, float), 0x581070);
ObjectFunc(ALO_EntranceGateExecutor_Main, 0x581520);
ObjectFunc(ALO_EntranceGateExecutor_Display, 0x581620);
ObjectFunc(ALO_EntranceGateExecutor_Delete, 0x5816D0);
FunctionPointer(int, ALO_EntranceGateExecutor_Load, (), 0x5816E0);
ObjectFunc(AL_CaveMenuMaster, 0x581870);
ObjectFunc(AL_CaveMenuMaster_display, 0x581A30);
ObjectFunc(CaveOmochaoExec, 0x581A70);
ObjectFunc(AL_KinderPMessageExec, 0x585300);
ObjectFunc(j_DeleteChildObjects, 0x588360);
ObjectFunc(EntryPortExec, 0x590FC0);
ObjectFunc(ChaoSelectWindowExecutor, 0x591190);
ObjectFunc(AL_ChaoParamWindowExecutor, 0x592530);
ObjectFunc(ALR_ADV_StaminaManagerExecutor, 0x5972F0);
ObjectFunc(ALR_ADV_TimeManagerExecutor, 0x5980C0);
ObjectFunc(FTaskExec, 0x5A6860);
ObjectFunc(BGExecutor, 0x5A7480);
ObjectFunc(WelcomeExecutor, 0x5A7C00);
ObjectFunc(BackButtonExecutor, 0x5A80B0);
ObjectFunc(CaveArrowExecutor, 0x5A8510);
ObjectFunc(ALO_RakugakiExecutor_Main, 0x5AAFB0);
ObjectFunc(ALO_RakugakiExecutor_Display, 0x5AB020);
ObjectFunc(ALO_RakugakiExecutor_Delete, 0x5AB1F0);
FunctionPointer(int, ALO_RakugakiExecutor_Load, (char, int), 0x5AB200);
ObjectFunc(LargeTitleBarExecutor, 0x5AB830);
ObjectFunc(MainMenuBarExecutor, 0x5ABDA0);
ObjectFunc(SayounaraWindowExecutor, 0x5AC410);
ObjectFunc(ChaoParamWindowExecutor, 0x5ACC50);
ObjectFunc(ChaoParamWindowExecutor_Display, 0x5ACF40);
ObjectFunc(ChaoParamWindowExecutor_Delete, 0x5AD660);
FunctionPointer(int, ChaoParamWindowExecutor_Load, (float, float), 0x5AD690);
FunctionPointer(int, LoadStg17Module, (), 0x5AD710);
FunctionPointer(int, MissionStreet_Init, (), 0x5AD720);
VoidFunc(LoadMissionStreetCharAnims, 0x5ADDF0);
ObjectFunc(ObjectSand, 0x5B3080);
ObjectFunc(ObjectFunc_ClipObject, 0x5B4250);
ObjectFunc(DeleteFunc_ResetWK, 0x5BCCF0);
ObjectFunc(ObjectCarCrashExec_1, 0x5B61C0);
ObjectFunc(EfMsPaper3DExec_Delete, 0x5B9180);
ObjectFunc(EfMsPaper3DExec, 0x5B91E0);
ObjectFunc(EfMsPaper3DExec_Display, 0x5B95C0);
FunctionPointer(int, LoadStg06Module, (), 0x5B9820);
FunctionPointer(int, SkyRail_Init, (), 0x5B9830);
ObjectFunc(BgmStart_SkyRail, 0x5B9DE0);
ObjectFunc(BgExec_09, 0x5B9E60);
VoidFunc(LoadSkyRailCharAnims, 0x5BA190);
ObjectFunc(JizooFireExec_2, 0x5BDCE0);
FunctionPointer(int, LoadStg32Module, (), 0x5BDE70);
FunctionPointer(int, MeteorHerd_Init, (), 0x5BDEC0);
ObjectFunc(BgExec_10, 0x5BF030);
ObjectFunc(ObjectAsiatoExec, 0x5C03F0);
VoidFunc(LoadMeteorHerdCharAnims, 0x5C0900);
ObjectFunc(ObjectMeteoFall_stg32, 0x5C1030);
ObjectFunc(ObjectFireBall, 0x5C1280);
FunctionPointer(int, LoadBossHotshotModule, (), 0x5C5EE0);
FunctionPointer(int, LoadBossBigfootModule, (), 0x5C62E0);
FunctionPointer(int, LoadBossFdogModule, (), 0x5C6700);
ObjectFunc(BossHotShotExec, 0x5CB2D0);
ObjectFunc(BossBigFootExec, 0x5CFE40);
ObjectFunc(BossFlyingDogExec, 0x5D35E0);
ObjectFunc(GroboAdxExec, 0x5D47D0);
ObjectFunc(GroboGunFireExecute, 0x5D8B20);
ObjectFunc(BossGroboEBeamCExec, 0x5D9A70);
ObjectFunc(BossGroboEBombExec, 0x5D9BA0);
ObjectFunc(BossGroboETorusExec, 0x5D9F40);
ObjectFunc(BossGroboEHasiraExec, 0x5DA280);
FunctionPointer(int, LoadStg31Module, (), 0x5DA990);
FunctionPointer(int, GreenHill_Init, (), 0x5DA9A0);
FunctionPointer(int, LoadStg13Module, (), 0x5DCD40);
VoidFunc(CityEscape_Init, 0x5DCD50);
ObjectFunc(BgmStart_CityEscape, 0x5DD450);
ObjectFunc(NoconTask, 0x5DDAC0);
VoidFunc(LoadCityEscapeCharAnims, 0x5DDCF0);
ObjectFunc(ObjectCarCrashExec_2, 0x5E15B0);
ObjectFunc(MusicChanger_Load, 0x5E2D70);
ObjectFunc(MusicChanger_Delete, 0x5E2DC0);
ObjectFunc(MusicChanger_Main, 0x5E2E40);
ObjectFunc(ObjectCrashObjExec, 0x5EC7A0);
FunctionPointer(int, LoadStg03Module, (), 0x5ED0C0);
VoidFunc(GreenForest_Init, 0x5ED0D0);
ObjectFunc(BgmStart_GreenForest, 0x5ED5D0);
ObjectFunc(BgExec_11, 0x5ED650);
ObjectFunc(HosiExec_2, 0x5EE270);
VoidFunc(LoadGreenForestCharAnims, 0x5EE920);
ObjectFunc(DeleteFunc_DynCol, 0x5F12B0);
FunctionPointer(int, MODMOD, (ObjectMaster* a1), 0x5F5580);
ObjectFunc(ObjectSonicJump, 0x5F66A0);
FunctionPointer(int, LoadMcwarnModule, (), 0x5F71D0);
FunctionPointer(int, ControllerSomething, (), 0x5F7620);
ObjectFunc(MCWarnNoCardExecutor, 0x5F7930);
ObjectFunc(MCWarnMultiExecutor, 0x5F7C60);
ObjectFunc(MCWarnProgressiveExecutor, 0x5F8160);
ObjectFunc(MCWarnFormatExecutor, 0x5F88C0);
ObjectFunc(debugExec, 0x5FA790);
ObjectFunc(eventExec, 0x5FAA70);
ObjectFunc(MovieExec, 0x5FAED0);
FunctionPointer(int, LoadEventModule, (), 0x5FBEF0);
ObjectFunc(blareExec, 0x602000);
ObjectFunc(singleModelEffectExec, 0x604480);
ObjectFunc(spriteExec, 0x6046D0);
FunctionPointer(int, LoadEmblemgetModule, (), 0x6048C0);
FunctionPointer(int, LoadStg09Module, (), 0x604AC0);
FunctionPointer(int, PrisonLane_Init, (), 0x604AD0);
VoidFunc(LoadPrisonLaneCharAnims, 0x604FA0);
FunctionPointer(int, LoadBossBigbogyModule, (), 0x60A840);
VoidFunc(KingBoomBoo_Init, 0x60A850);
FunctionPointer(int, LoadStg19Module, (), 0x6193C0);
FunctionPointer(int, SonicVsShadow1_Init, (), 0x6193D0);
ObjectFunc(BgExec_12, 0x6198B0);
ObjectFunc(ControlShadow_stg19, 0x619C70);
FunctionPointer(int, Cart_UnknownB, (), 0x61A390);
VoidFunc(Cart_Init, 0x61A3B0);
FunctionPointer(int, Cart_UnknownA, (), 0x61A910);
FunctionPointer(int, LoadCartModule, (), 0x61AA70);
ObjectFunc(timeExtExec, 0x61B5B0);
ObjectFunc(layoutExec, 0x61BB90);
ObjectFunc(cartResultExec, 0x61C220);
FunctionPointer(ObjectMaster*, LoadCartExecuter, (const void* a1), 0x61C520);
ObjectFunc(CartExecuter_Main, 0x61CD60);
ObjectFunc(jamaExecuter, 0x620760);
ObjectFunc(delaykeyExec, 0x621520);
ObjectFunc(coursePartsEntryExec, 0x621670);
ObjectFunc(bgExec_13, 0x622050);
ObjectFunc(startGoalExec, 0x6227A0);
ObjectFunc(CartTimeOverExec, 0x623700);
ObjectFunc(CartLimousineExec, 0x623900);
ObjectFunc(j_DeleteObject_, 0x623D40);
ObjectFunc(courseDisplayExec, 0x623E00);
ObjectFunc(RESTART_OBJ, 0x624100);
ObjectFunc(CartRingExec, 0x625770);
ObjectFunc(Muteki, 0x6262E0);
FunctionPointer(int, LoadStg20Module, (), 0x626670);
FunctionPointer(int, TailsVsEggman1_Init, (), 0x626680);
ObjectFunc(ControlTWalker_1, 0x627300);
FunctionPointer(int, LoadStg53Module, (), 0x627D10);
FunctionPointer(int, CosmicWall2P_Init, (), 0x627D30);
ObjectFunc(BgmStart_CosmicWall, 0x628140);
ObjectFunc(BgExec_14, 0x6281C0);
FunctionPointer(int, LoadStg43Module, (), 0x6287D0);
FunctionPointer(int, CosmicWall_Init, (), 0x6287E0);
ObjectFunc(ObjSetManExec_2, 0x628DB0);
ObjectFunc(BgExec_15, 0x628EB0);
VoidFunc(LoadCosmicWallCharAnims, 0x6295D0);
ObjectFunc(ObjectEggJump, 0x62E2C0);
FunctionPointer(int, LoadStg04Module, (), 0x62E9A0);
FunctionPointer(int, WhiteJungle_Init, (), 0x62E9B0);
ObjectFunc(BgmStart_WhiteJungle, 0x62EFC0);
ObjectFunc(BgExec_16, 0x62F060);
VoidFunc(LoadWhiteJungleCharAnims, 0x6301E0);
ObjectFunc(AmeExec, 0x630550);
FunctionPointer(int, LoadStg08Module, (), 0x634510);
FunctionPointer(int, SecurityHall_Init, (), 0x634520);
ObjectFunc(BgExec_17, 0x634DB0);
VoidFunc(LoadSecurityHallCharAnims, 0x634EF0);
ObjectFunc(EfShPaper3DExec, 0x639500);
FunctionPointer(int, LoadStg36Module, (), 0x639B50);
FunctionPointer(int, CannonsCoreT_Init, (), 0x639B60);
ObjectFunc(BgExec_18, 0x63A5F0);
ObjectFunc(BgClip_07, 0x63D290);
FunctionPointer(int, LoadStg18Module, (), 0x63D490);
FunctionPointer(int, DryLagoon_Init, (), 0x63D4A0);
ObjectFunc(BgExec_19, 0x63DB80);
ObjectFunc(BgClip_08, 0x63E540);
FunctionPointer(int, VibSlightExec_LoadB, (char), 0x63E850);
FunctionPointer(int, WARP_N, (ObjectMaster* a1), 0x640C70);
ObjectFunc(EffectShibukiExec, 0x641300);
ObjectFunc(MizugomiExec_2, 0x6449E0);
VoidFunc(LoadDryLagoonCharAnims, 0x647830);
FunctionPointer(int, LoadStg33Module, (), 0x648680);
FunctionPointer(int, KnucklesVsRouge_Init, (), 0x648690);
ObjectFunc(BgExec_20, 0x648AD0);
ObjectFunc(ControlRouge, 0x649BA0);
FunctionPointer(int, LoadStg15Module, (), 0x64BB80);
FunctionPointer(int, WeaponsBed2P_Init, (), 0x64BB90);
FunctionPointer(int, LoadStg59Module, (), 0x64C5C0);
VoidFunc(DeathChamber2P_Init, 0x64C5D0);
ObjectFunc(BgExec_21, 0x64CDA0);
FunctionPointer(int, LoadStg57Module, (), 0x64DA80);
FunctionPointer(int, MetalHarbor2P_Init, (), 0x64DA90);
ObjectFunc(BgmStart_MetalHarbor, 0x64DEE0);
ObjectFunc(BgExec_22, 0x64DF60);
FunctionPointer(int, LoadStg44Module, (), 0x64E1D0);
FunctionPointer(int, MadSpace_Init, (), 0x64E1E0);
ObjectFunc(ObjSetManExec_Main_2, 0x64E810);
ObjectFunc(BgExec_23, 0x64EB10);
VoidFunc(LoadMadSpaceCharAnims, 0x64F4C0);
ObjectFunc(ManTxt, 0x6546C0);
ObjectFunc(DisplayMCWarnNoCardExecutor, 0x6549C0);
ObjectFunc(DisplayMCWarn, 0x654CB0);
ObjectFunc(DisplayMCWarnMultiExecutor, 0x6553A0);
FunctionPointer(int, LoadStg48Module, (), 0x6555F0);
VoidFunc(HiddenBase2P_Init, 0x655600);
ObjectFunc(BgmStart_PyramidRace, 0x655B20);
FunctionPointer(int, LoadStg21Module, (), 0x656350);
VoidFunc(SandOcean_Init, 0x656360);
ObjectFunc(BgExec_24, 0x6569B0);
ObjectFunc(BgClip_09, 0x656BB0);
VoidFunc(LoadSandOceanCharAnims, 0x658A10);
FunctionPointer(int, LoadStg38Module, (), 0x65E6A0);
FunctionPointer(int, CannonsCoreK_Init, (), 0x65E6B0);
ObjectFunc(BgClip_10, 0x65EE50);
VoidFunc(LoadCannonsCoreKCharAnims, 0x65EF70);
ObjectFunc(BgExec_25, 0x65F1A0);
ObjectFunc(BgBeamFence1OpenExec, 0x65FFA0);
ObjectFunc(BgBeamFence2OpenExec, 0x660290);
ObjectFunc(MizugomiExec_3, 0x660710);
FunctionPointer(int, LoadStg29Module, (), 0x661CC0);
FunctionPointer(int, TailsVsEggman2_Init, (), 0x661CF0);
ObjectFunc(ControlTWalker_2, 0x662990);
FunctionPointer(int, LoadStg50Module, (), 0x6639E0);
FunctionPointer(int, PlanetQuest_Init, (), 0x6639F0);
ObjectFunc(ObjSetManExec_3, 0x664010);
ObjectFunc(BgExec_26, 0x6642B0);
FunctionPointer(int, Menu_MainMenu, (), 0x664EC0);
FunctionPointer(signed int, RunMenus, (), 0x666270);
FunctionPointer(int, SetsMenuToTitle, (), 0x666600);
ObjectFunc(keepMessage_Delete, 0x666C10);
ObjectFunc(keepMessage, 0x666C80);
ObjectFunc(screenEffectExec, 0x667D60);
ObjectFunc(newMenuExec, 0x669200);
FunctionPointer(int, Menu_Battle, (), 0x66A1A0);
VoidFunc(Set_CharacterToCostumeIndex, 0x66B510);
FastcallFunctionPointer(void, SetCharacterAndAltCostume, (int n, int character), 0x66B560);
VoidFunc(SetThingIfCharacterThings, 0x66B700);
VoidFunc(RandomBattle_SetCharacters, 0x66B730);
FunctionPointer(int, ButThenThisSetsIttoBattle, (), 0x66BDE0);
ObjectFunc(optionsExec, 0x66C4C0);
FunctionPointer(int, Menu_Settings, (), 0x66D970);
ObjectFunc(alphaTitleExec, 0x66F6C0);
FunctionPointer(int, LoadAdvertiseModule, (), 0x670660);
FunctionPointer(int, Menu_StorySelect, (), 0x670A90);
FunctionPointer(int, Menu_Old2PBattle, (), 0x671120);
FunctionPointer(int, Menu_TitleScreen, (), 0x671BA0);
FunctionPointer(int, Menu_Emblems, (), 0x671FC0);
FunctionPointer(int, Menu_StageSelect, (), 0x672760);
FunctionPointer(int, Menu_Kart, (), 0x672C60);
FunctionPointer(int, Menu_Tutorial, (), 0x673E70);
FunctionPointer(int, Menu_SoundTest, (), 0x674550);
FunctionPointer(int, Menu_BossAttack, (), 0x674A70);
ObjectFunc(tgsTitleExec, 0x6756E0);
ObjectFunc(StageMapExec_Main, 0x677350);
ObjectFunc(StageMapExec_Display, 0x6777C0);
ObjectFunc(StageMapExec_Delete, 0x677990);
VoidFunc(LoadStageMapExec, 0x6779A0);
ObjectFunc(arasujiExec, 0x678610);
FunctionPointer(int, Menu_Unknown_11, (), 0x678EB0);
ObjectFunc(twoPVSExec, 0x679C20);
ObjectFunc(twoPVSExec_Display, 0x679E40);
FunctionPointer(int, twoPVSExec_Load, (), 0x67A280);
FunctionPointer(int, Load_twoPVS_Textures, (), 0x67A480);
ObjectFunc(twoPVSExec_Delete, 0x67A4C0);
ObjectFunc(soundTestExec, 0x67A710);
ObjectFunc(storyMainExec, 0x67BDF0);
ObjectFunc(tutorialExec, 0x67D620);
ObjectFunc(tutorialExec_Display, 0x67D7D0);
ObjectFunc(tutorialExec_1C, 0x67D890);
ObjectFunc(tutorialExec_Delete, 0x67D8B0);
ObjectFunc(mainMenuExec, 0x67DE60);
FunctionPointer(int, Menu_Unknown_5, (), 0x67E460);
ObjectFunc(battleAExec, 0x67EE00);
ObjectFunc(battleAExec_Display, 0x680C70);
ObjectFunc(battleAExec_Delete, 0x680DE0);
ObjectFunc(fadeManagerExec, 0x6813A0);
ObjectFunc(bossAttackExec, 0x681690);
ObjectFunc(fileSelectExec, 0x683DA0);
ObjectFunc(emblemResultExec, 0x685D80);
ObjectFunc(battleBExec, 0x688670);
FunctionPointer(int, StageNumberFrom2PSelection, (), 0x688BF0);
FunctionPointer(int, Menu_FileSelect, (), 0x688C60);
ObjectFunc(tvSettingExec, 0x68A080);
ObjectFunc(kartRaceExec, 0x68BCA0);
ObjectFunc(kartRaceExec_Display, 0x68C1B0);
ObjectFunc(kartRaceExec_Something, 0x68C370);
ObjectFunc(kartRaceExec_Delete, 0x68C390);
FunctionPointer(int, Menu_DownloadEvent, (), 0x68C760);
FunctionPointer(int, Menu_Unknown_7, (), 0x68CED0);
ObjectFunc(niseTitleExec, 0x68E0A0);
FunctionPointer(int, LoadStg55Module, (), 0x68E4F0);
VoidFunc(LostColony2P_Init, 0x68E500);
ObjectFunc(LightBombExec_2, 0x68EA40);
ObjectFunc(BgInit_1, 0x68F5F0);
VoidFunc(LoadLostColony2PCharAnims, 0x68F6B0);
FunctionPointer(int, LoadStg26Module, (), 0x68F890);
FunctionPointer(int, EggQuarters_Init, (), 0x68F8A0);
ObjectFunc(BgExec_27, 0x690170);
ObjectFunc(BgClip_11, 0x690BD0);
ObjectFunc(ObjectRobotExec, 0x690FC0);
ObjectFunc(FogRaderExec, 0x692D20);
VoidFunc(LoadEggQuartersCharAnims, 0x693570);
ObjectFunc(ObjectHideColiManager, 0x693F20);
ObjectFunc(MizugomiExec_4, 0x694110);
ObjectFunc(ObjectHideLightManager, 0x694600);
ObjectFunc(ObjectEyeExec, 0x697450);
FunctionPointer(int, LoadStg11Module, (), 0x699370);
FunctionPointer(int, IronGate_Init, (), 0x699380);
ObjectFunc(LightBombExec_3, 0x699890);
ObjectFunc(BgExec_28, 0x699B70);
VoidFunc(LoadIronGateCharAnims, 0x69A120);
ObjectFunc(ItemBox_Delete, 0x69DB80);
FunctionPointer(int, LoadStg16Module, (), 0x6A2450);
FunctionPointer(int, WildCanyon_Init, (), 0x6A2460);
ObjectFunc(BgExec_29, 0x6A2C30);
ObjectFunc(BgClip_12, 0x6A32B0);
ObjectFunc(CalcLightForPlayer_2, 0x6A34A0);
VoidFunc(LoadWildCanyonCharAnims, 0x6A8090);
FunctionPointer(int, VibSlightExec_stg16_Load, (char), 0x6A89A0);
FunctionPointer(int, LoadStg25Module, (), 0x6AA1A0);
FunctionPointer(int, DeathChamber_Init, (), 0x6AA1B0);
ObjectFunc(BgExec_30, 0x6AA970);
ObjectFunc(BgClip_13, 0x6AB7D0);
ObjectFunc(ObjectSandglassExec, 0x6ABDE0);
VoidFunc(LoadDeathChamberCharAnims, 0x6AD4E0);
FunctionPointer(ObjectMaster*, EfMsgWnd0Exec_New, (int a1, const char* str, int displayTime, int language), 0x6B6E20);
ObjectFunc(EfMsgWnd0Exec_LevelUpDai, 0x6B7170);
ObjectFunc(EfMsgWnd0Exec, 0x6B79D0);
FunctionPointer(ef_message*, ef_message_New, (const char* str, int language, short a3, short a4), 0x6B7F40);
ObjectFunc(Omochao_Main, 0x6C0780);
ObjectFunc(MsgerDmyTaskExec, 0x6C0A50);
ObjectFunc(RingMain, 0x6C0F80);
ObjectFunc(SGRing_Main, 0x6C1470);
ObjectFunc(SGRing_Display, 0x6C1990);
FunctionPointer(void, DropRings, (int playerNum), 0x6C1AF0);
ObjectFunc(Tobitiri_Main, 0x6C1D20);
ObjectFunc(Ring_Delete, 0x6C2760);
ObjectFunc(RingModelExec_Delete, 0x6C29F0);
ObjectFunc(RingModelExec, 0x6C2A60);
ObjectFunc(RingModelExec_Display, 0x6C2AF0);
ObjectFunc(RingModelExec_1C, 0x6C2C70);
ObjectFunc(EfObjLightExec, 0x6C37A0);
ThiscallFunctionPointer(Sint32, LoadStageLight, (const char* filename), 0x6C3AE0);
FunctionPointer(int, SpringA_Main, (int a1), 0x6C4480);
ObjectFunc(SpringB_Main, 0x6C4E90);
FunctionPointer(int, EFFOBJ0, (ObjectMaster* a1), 0x6C5570);
FunctionPointer(signed int, RingLinearMain, (ObjectMaster* a1), 0x6C5ED0);
FunctionPointer(int, RingCircleMain, (ObjectMaster* a1), 0x6C6180);
ObjectFunc(GoalRing_Main, 0x6C63C0);
ObjectFunc(GoalRing_Delete, 0x6C65A0);
ObjectFunc(GoalRing_MainB, 0x6C6600);
ObjectFunc(GoalRing_Display, 0x6C6CD0);
ObjectFunc(GoalRing_20, 0x6C6F10);
FunctionPointer(int, GoalRing_2C, (int), 0x6C7280);
FunctionPointer(int, EFLENSF0, (int), 0x6C75C0);
ObjectFunc(ItemBox_Main, 0x6C7C10);
ObjectFunc(ITEMBOX2_B, 0x6C7CE0);
ObjectFunc(ItemBox_Display_B, 0x6C8280);
ObjectFunc(ItemBox_Unknown, 0x6C83B0);
ObjectFunc(ItemBox_Display_A, 0x6C8810);
FunctionPointer(void, ItemBoxItem_LifeAgainAgain, (ObjectMaster*, int), 0x6C8970);
FunctionPointer(void, ItemBoxItem_20Rings, (ObjectMaster*, int), 0x6C8A10);
FunctionPointer(void, ItemBoxItem_Barrier, (ObjectMaster* a1, int n), 0x6C8A40);
FunctionPointer(void, ExpManExec_Load, (NJS_VECTOR* a1), 0x6C8AB0);
ObjectFunc(ExpManExec, 0x6C8C80);
ObjectFunc(ExpManExec_Display, 0x6C8D10);
ObjectFunc(ExpManExec_Delete, 0x6C8DE0);
ObjectFunc(ItemBoxAir_Main, 0x6C8EF0);
ObjectFunc(ItemBoxAir_Display, 0x6C93C0);
ObjectFunc(ItemBoxAir_Unknown, 0x6C9500);
FunctionPointer(void, ItemBoxItem_10Rings, (ObjectMaster*, int), 0x6C97B0);
FunctionPointer(void, ItemBoxItem_LifeAgain, (ObjectMaster* a1, char a2), 0x6C97F0);
FunctionPointer(void, ItemBoxItem_Speedup, (ObjectMaster*, int), 0x6C9870);
FunctionPointer(void, ItemBoxItem_Bomb, (ObjectMaster*, int), 0x6C9890);
FunctionPointer(void, ItemBoxItem_HP, (int a1, int a2), 0x6C98B0);
FunctionPointer(void, ItemBoxItem_MagneticBarrier, (ObjectMaster*, int), 0x6C98D0);
FunctionPointer(void, ItemBoxItem_Invincibility, (ObjectMaster*, int), 0x6C98F0);
FunctionPointer(int, LIGHT_SW, (ObjectMaster* a1), 0x6C9910);
ObjectFunc(MuddyExec, 0x6CA550);
ObjectFunc(BlackSmokeGeneratorExec, 0x6CA990);
ObjectFunc(BrokenDownSmokeExec, 0x6CAB90);
ObjectFunc(SmokeExec_2, 0x6CD020);
ObjectFunc(SandyExec, 0x6CD4A0);
FunctionPointer(void, SomethingParticleRelated, (Rotation* a1, NJS_VECTOR* a2, float a3), 0x6CD720);
ObjectFunc(WoodenCrate_Main, 0x6CD7F0);
ObjectFunc(WoodenCrate_Main_, 0x6CD890);
ObjectFunc(WoodenCrate_Display, 0x6CDF90);
FunctionPointer(int, ROCKETMISSILE, (ObjectMaster* parent), 0x6CE4C0);
ObjectFunc(DashPanel_Main, 0x6CFBF0);
FunctionPointer(void, EmeraldPiece_Load, (NJS_VECTOR* a1, unsigned __int8 a2, unsigned __int8 a3), 0x6CFFC0);
ObjectFunc(EmeraldPiece_Main, 0x6D00C0);
FunctionPointer(void, EmeraldGetSign_Load, (int n, void* idk), 0x6D0530);
ObjectFunc(EmeraldGetSign, 0x6D0650);
ObjectFunc(EmeraldGetSign_field_20, 0x6D0760);
ObjectFunc(Spring_Delete, 0x6D1FC0);
FunctionPointer(int, ORI, (int a1), 0x6D29F0);
FunctionPointer(int, DMYOBJ, (ObjectMaster* a1), 0x6D34B0);
FunctionPointer(int, IRONBALL2, (ObjectMaster* a1), 0x6D3C00);
ObjectFunc(ObjectSkullObj, 0x6D4860);
FunctionPointer(int, PSKULL, (ObjectMaster* a1), 0x6D4890);
FunctionPointer(void, ObjectSkullObj_Load, (NJS_VECTOR* a1, float a2), 0x6D48F0);
FunctionPointer(int, SKULL, (ObjectMaster* a1), 0x6D4E30);
FunctionPointer(int, ROCKET, (ObjectMaster* a2), 0x6D4EA0);
ObjectFunc(IronCrate_Main, 0x6D63F0);
ObjectFunc(SampleS_Main, 0x6D6EE0);
FunctionPointer(int, SAMPLE_M, (ObjectMaster* a1), 0x6D6F60);
FunctionPointer(int, SAMPLE_L, (ObjectMaster* a1), 0x6D6FB0);
FunctionPointer(int, SAMPLESW, (ObjectMaster* a1), 0x6D7030);
FunctionPointer(signed int, DashRamp_Main, (ObjectMaster* a1), 0x6D7130);
FunctionPointer(int, LevelItem_Load, (int _this), 0x6D8540);
FunctionPointer(int, LevelItem_Main, (int _this), 0x6D86D0);
FunctionPointer(int, LongSpring_Main, (ObjectMaster* a1), 0x6D9310);
FunctionPointer(int, CHAOPIPE, (ObjectMaster* a1), 0x6D95E0);
ObjectFunc(Checkpoint_Main, 0x6D99A0);
FunctionPointer(int, DYNAMITE, (ObjectMaster* a1), 0x6DA720);
FunctionPointer(int, SOAP_SW, (ObjectMaster* a1), 0x6DAEB0);
ObjectFunc(ItemBoxBalloon, 0x6DB030);
FunctionPointer(void, ItemBoxItem_Life, (ObjectMaster*, int), 0x6DB910);
FunctionPointer(void, ItemBoxItem_5Rings, (ObjectMaster*, int), 0x6DB980);
FunctionPointer(int, ItemBoxBalloon_Generator, (int), 0x6DBA70);
FunctionPointer(int, BUNCHIN, (ObjectMaster* a2), 0x6DBB90);
FunctionPointer(int, Switch_Main, (ObjectMaster* a1), 0x6DCDC0);
FunctionPointer(int, SSS, (ObjectMaster* a1), 0x6DE130);
FunctionPointer(int, STOPLSD, (ObjectMaster* a1), 0x6DE270);
FunctionPointer(int, STOPLOCKON, (ObjectMaster* a1), 0x6DE340);
ObjectFunc(CONTCHAO, 0x6DE3B0);
ObjectFunc(FlashManager, 0x6DEDD0);
FunctionPointer(int, FlashManager_Load_A, (float, float, float, float), 0x6DEE10);
FunctionPointer(int, FlashManager_Load_B, (float, float, float, float, char), 0x6DEEC0);
FunctionPointer(int, FlashManager_Load_C, (float, float, float, float, char, float), 0x6DEF70);
FunctionPointer(ObjectMaster*, itemBoxManager_Load, (), 0x6DF340);
ObjectFunc(itemBoxManager_Delete, 0x6DF3E0);
FunctionPointer(void, DisplayItemBoxItem, (int pnum, int tnum), 0x6DF440);
ObjectFunc(itemBoxManager, 0x6DF4D0);
ObjectFunc(itemBoxManager_Something, 0x6DF6E0);
ObjectFunc(FogTaskExec_Main, 0x6DFCC0);
ObjectFunc(FogTaskExec_Delete, 0x6DFD20);
ObjectFunc(FogtaskManExec_Main, 0x6DFD40);
FunctionPointer(int, FogtaskManExec_Delete, (int), 0x6DFD90);
ObjectFunc(EfCrash3DExec, 0x6E1B80);
FunctionPointer(int, HINTBOX, (ObjectMaster* a1), 0x6E2700);
FunctionPointer(int, KDWARPHOLE, (ObjectMaster* a1), 0x6E2F00);
FunctionPointer(int, KDOOR, (ObjectMaster* a1), 0x6E3F80);
FunctionPointer(int, KDDRNGL, (ObjectMaster* a1), 0x6E4830);
FunctionPointer(double, KDDRNGC, (ObjectMaster* a1), 0x6E4FB0);
FunctionPointer(int, SPHERE, (ObjectMaster* a1), 0x6E5400);
FunctionPointer(int, CCYL, (ObjectMaster* a1), 0x6E5470);
FunctionPointer(int, CCUBE, (ObjectMaster* a1), 0x6E54E0);
FunctionPointer(int, CWALL, (ObjectMaster* a1), 0x6E5550);
FunctionPointer(int, CCIRCLE, (ObjectMaster* a1), 0x6E55C0);
FunctionPointer(int, UDREEL, (ObjectMaster* a1), 0x6E5620);
FunctionPointer(int, KDASIBA, (ObjectMaster* a2), 0x6E6680);
FunctionPointer(int, LINKLINK, (ObjectMaster* a1), 0x6E6EB0);
ObjectFunc(SOLIDBOX, 0x6E70B0);
ObjectFunc(Crate_Delete, 0x6E7140);
FunctionPointer(int, KNUDAI, (ObjectMaster* a2), 0x6E7480);
FunctionPointer(int, PauseHintExec_Load, (), 0x6E7C00);
ObjectFunc(PauseHintExec_Display, 0x6E7C60);
ObjectFunc(PauseHintExec, 0x6E7E40);
ObjectFunc(PauseHintExec_Delete, 0x6E7E60);
FunctionPointer(int, SCHBOX, (ObjectMaster* a1), 0x6E7F60);
ObjectFunc(SGSearchBox, 0x6E80C0);
ObjectFunc(SearchBox_Delete, 0x6E8210);
ObjectFunc(SearchBox_Main, 0x6E8260);
ObjectFunc(SearchBox_DisplayB, 0x6E8970);
ObjectFunc(SearchBox_field1C, 0x6E8B60);
ObjectFunc(SearchBox_DisplayA, 0x6E8E60);
FunctionPointer(int, KDITEMBOX, (ObjectMaster* a1), 0x6E9350);
FunctionPointer(int, KDSPRING, (ObjectMaster* a1), 0x6E94C0);
FunctionPointer(int, KDSPRINGB, (ObjectMaster* a1), 0x6E9510);
ObjectFunc(ChaoKeyTask, 0x6E99D0);
ObjectFunc(ObjectChaoKeyExec, 0x6E9DE0);
FunctionPointer(int, WSMMLS, (ObjectMaster* a1), 0x6EA1E0);
ObjectFunc(SGItemBox_Main, 0x6EABC0);
ObjectFunc(SGItemBox_Display, 0x6EAED0);
ObjectFunc(SGItemBox_field20, 0x6EB020);
ObjectFunc(SGSpringA, 0x6EB1B0);
ObjectFunc(SGSpringA_Display, 0x6EB780);
ObjectFunc(SGSpringB, 0x6EB9A0);
ObjectFunc(SGSpringB_Display, 0x6EBBD0);
ObjectFunc(WhiteBreathExec, 0x6EC3A0);
ObjectFunc(SplashExec, 0x6ED6E0);
FunctionPointer(void, ObjectWaterripple_Load, (NJS_VECTOR* position, NJS_VECTOR* a2, float a3), 0x6EDAF0);
ObjectFunc(ObjectWaterripple, 0x6EDB80);
ObjectFunc(ObjectWaterripple_Main, 0x6EDBA0);
ObjectFunc(ObjectWaterripple_Display, 0x6EDC30);
ObjectFunc(ObjectWaterripple_Delete, 0x6EDD80);
FunctionPointer(void, Exec_Load, (NJS_VECTOR* a1, Rotation* a2, float a3, float a4), 0x6EDEE0);
ObjectFunc(Exec, 0x6EE310);
ObjectFunc(bubble_crush_exec, 0x6EFAA0);
ObjectFunc(bbl_ripple_exec, 0x6EFC90);
ObjectFunc(EsShakeRad, 0x6F01B0);
ObjectFunc(WpHoleExec, 0x6F1030);
ObjectFunc(ObjectAsiotoExec, 0x6F1A00);
FunctionPointer(int, LoadStg49Module, (), 0x6F2160);
FunctionPointer(int, PoolQuest_Init, (), 0x6F2170);
FunctionPointer(int, LoadStg10Module, (), 0x6F2900);
FunctionPointer(int, MetalHarbor_Init, (), 0x6F2910);
ObjectFunc(BgExec_31, 0x6F2D90);
VoidFunc(LoadMetalHarborCharAnims, 0x6F36A0);
ObjectFunc(CloudExec, 0x6F9F50);
FunctionPointer(int, LoadStg28Module, (), 0x6FA990);
FunctionPointer(int, PyramidCave_Init, (), 0x6FA9A0);
ObjectFunc(BgClip_14, 0x6FB0C0);
FunctionPointer(int, WoodenEggmanCrate, (ObjectMaster* a1), 0x6FB200);
FunctionPointer(int, IronEggmanCrate, (ObjectMaster* a1), 0x6FBBA0);
FunctionPointer(int, SolidEggmanBox, (int a1), 0x6FC330);
VoidFunc(LoadPyramidCaveCharAnims, 0x6FC640);
VoidFunc(nullsub_1, 0x6FE430);
ObjectFunc(WARP, 0x700AC0);
ObjectFunc(WARP_Main, 0x700B30);
StdcallFunctionPointer(int, nullsub_13, (int, int), 0x708DD0);
FunctionPointer(int, LoadStg23Module, (), 0x710260);
VoidFunc(HiddenBase_Init, 0x710270);
ObjectFunc(BgExec_32, 0x710790);
ObjectFunc(BgClip_15, 0x710A70);
FunctionPointer(int, DAI, (ObjectMaster* parent), 0x710CC0);
VoidFunc(LoadHiddenBaseCharAnims, 0x711C30);
FunctionPointer(int, KAITEN, (ObjectMaster* a2), 0x711E10);
FunctionPointer(int, BLOCK_0, (ObjectMaster* a1), 0x7125A0);
FunctionPointer(int, KOTEIDAI, (ObjectMaster* a1), 0x712AE0);
FunctionPointer(int, MAT, (ObjectMaster* a1), 0x712D40);
FunctionPointer(int, PILLAR, (ObjectMaster* a1), 0x712E60);
FunctionPointer(int, HATA2, (ObjectMaster* a1), 0x712FC0);
FunctionPointer(int, CORNER, (ObjectMaster* a1), 0x713230);
FunctionPointer(int, UGOKIDAI, (ObjectMaster* a2), 0x713330);
FunctionPointer(int, OIL, (ObjectMaster* a1), 0x7137A0);
FunctionPointer(int, STAFF, (ObjectMaster* a1), 0x7139D0);
FunctionPointer(int, HATA, (ObjectMaster* a1), 0x713E90);
FunctionPointer(int, HASHIRA, (ObjectMaster* parent), 0x7140B0);
FunctionPointer(int, WEED, (ObjectMaster* a1), 0x714CF0);
FunctionPointer(int, FENCE_0, (ObjectMaster* a1), 0x714E60);
FunctionPointer(int, TSUBO, (ObjectMaster* a1), 0x715110);
FunctionPointer(void, LoadSonic, (int playerNum), 0x716E00);
FunctionPointer(void, LoadAmy, (int playerNum), 0x7170E0);
FunctionPointer(void, LoadShadow, (int playerNum), 0x717360);
FunctionPointer(void, LoadMetalSonic, (int playerNum), 0x717640);
ObjectFunc(Sonic_Main, 0x717840);
FunctionPointer(void, Sonic_ChecksForDamage, (EntityData1* a1, EntityData2* a2, CharObj2Base* a3, SonicCharObj2* a5), 0x719920);
ObjectFunc(Sonic_Delete, 0x71E300);
ObjectFunc(Sonic_2C, 0x71E520);
FunctionPointer(void, SonicDrawCallBack, (NJS_OBJECT* obj), 0x71EAA0);
FunctionPointer(void, AmyDrawCallBack, (NJS_OBJECT* obj), 0x71F040);
FunctionPointer(void, ShadowDrawCallBack, (NJS_OBJECT* obj), 0x71F5E0);
FunctionPointer(void, MetalSonicDrawCallBack, (NJS_OBJECT* obj), 0x71FBE0);
ObjectFunc(Sonic_Display, 0x720090);
ObjectFunc(Sonic_1C, 0x720B50);
ObjectFunc(Shadow_1C, 0x720C10);
FunctionPointer(int, Sonic_BlackShield, (int), 0x723730);
FunctionPointer(int, Sonic_CheckBlackShield, (), 0x723790);
ObjectFunc(Sonic2PWindCutterMan, 0x724450);
FunctionPointer(void, Sonic2PWindCutterMan_Load, (CharObj2Base* a1), 0x7245F0);
ObjectFunc(Sonic2PTimeStopMan, 0x724720);
FunctionPointer(void, Sonic2PTimeStopMan_Load, (CharObj2Base* a1), 0x724A80);
ObjectFunc(Amy2PAmyFlashMan, 0x724EA0);
FunctionPointer(void, Amy2PAmyFlashMan_Load, (CharObj2Base* a1), 0x724F80);
FunctionPointer(int, Sonic_CheckBounceAttack, (int), 0x725270);
ObjectFunc(ManageSonicLightSpinCharge, 0x725E40);
ObjectFunc(PosBar2PMan_1C, 0x727DA0);
ObjectFunc(PosBar2PMan, 0x727F90);
ObjectFunc(PosBar2PMan_Delete, 0x728060);
FunctionPointer(int, PosBar2PMan_Load, (), 0x728070);
FunctionPointer(void, LoadKnuckles, (int playerNum), 0x728110);
FunctionPointer(void, LoadRouge, (int playerNum), 0x728460);
FunctionPointer(void, LoadTikal, (int playerNum), 0x7288B0);
FunctionPointer(void, LoadChaos, (int playerNum), 0x728B60);
ObjectFunc(Knuckles_Main, 0x728D70);
FunctionPointer(void, Knuckles_ChecksDamage, (EntityData1* a1, signed int a2, KnucklesCharObj2* a3, KnucklesCharObj2* a4), 0x72A520);
ObjectFunc(Knuckles_Delete, 0x72D8A0);
ObjectFunc(Rouge_2C, 0x72E390);
ObjectFunc(Knuckles_Display, 0x72EF20);
ObjectFunc(Tikal_Display, 0x72FB10);
FunctionPointer(void, RougeDrawCallBack, (NJS_OBJECT* obj), 0x7304D0);
ObjectFunc(Rouge_Display, 0x730970);
FunctionPointer(void, ChaosDrawCallBack, (NJS_OBJECT* obj), 0x7315E0);
ObjectFunc(Chaos_Display, 0x731A30);
ObjectFunc(Chaos_1C, 0x732100);
FunctionPointer(int, Knuckles_CheckSunglasses, (), 0x735EC0);
ObjectFunc(KnucklesSunglassesMan, 0x735F10);
ObjectFunc(Knuckles2PEarthquakeMan_Main, 0x7362A0);
ObjectFunc(Knuckles2PEarthquakeMan_Delete, 0x7362D0);
FunctionPointer(int, Knuckles2PEarthquakeMan_Load, (int a1, int, int num), 0x7363E0);
ObjectFunc(Knuckles2PEarthflameMan, 0x736580);
ObjectFunc(Knuckles2PPowerFlashMan, 0x736EE0);
FunctionPointer(void, EmeraldLocations_1POr2PGroup3, (EmeManObj2* a1), 0x7380A0);
ObjectFunc(EmeraldManager_Main, 0x739570);
ObjectFunc(EmeraldRadar_Update, 0x73A6F0);
ObjectFunc(EmeraldManager_Delete, 0x73A970);
FunctionPointer(int, LoadEmeraldManager, (), 0x73AA70);
ObjectFunc(ExecDisplayGottenEmeraldIcon, 0x73AE40);
FunctionPointer(int, ExecDisplayGottenEmeraldIcon_Load, (int), 0x73AEC0);
ObjectFunc(Eggman_Main, 0x73C380);
ObjectFunc(Eggman_Delete, 0x73E700);
ObjectFunc(Eggman_Display, 0x73EF20);
FunctionPointer(void, EggmanDrawCallBack, (NJS_OBJECT* obj), 0x73EAD0);
FunctionPointer(int, FreeMovement_SonicEggman, (), 0x73F5A0);
FunctionPointer(void, LoadMechEggman, (int playerNum), 0x740C50);
FunctionPointer(void, LoadMechTails, (int playerNum), 0x740EB0);
FunctionPointer(void, LoadChaoWalker, (int playerNum), 0x741110);
FunctionPointer(void, LoadDarkChaoWalker, (int playerNum), 0x7412F0);
ObjectFunc(MechEggman_Main, 0x741530);
FunctionPointer(void, MechEggman_RunActions, (EntityData1* data, signed int a3, MechEggmanCharObj2* co2, int a2), 0x742C10);
ObjectFunc(MechEggman_Delete, 0x743E90);
ObjectFunc(MechEggman_Display, 0x7444F0);
ObjectFunc(MechEggman_1C, 0x7454B0);
ObjectFunc(MechEggman_28, 0x7458F0);
ObjectFunc(MechEggman_2C, 0x745910);
FunctionPointer(void, ChaoWalkerDrawCallBack, (NJS_OBJECT* obj), 0x745CC0);
ObjectFunc(ChaoWalker_Display, 0x746290);
ObjectFunc(ChaoWalker_1C, 0x746850);
FunctionPointer(void, DarkChaoWalkerDrawCallBack, (NJS_OBJECT* obj), 0x746B00);
ObjectFunc(DarkChaoWalker_Display, 0x7470D0);
ObjectFunc(DarkChaoWalker_1C, 0x7476A0);
FunctionPointer(void, MechTailsDrawCallBack, (NJS_OBJECT* obj), 0x747940);
ObjectFunc(MechTails_Display, 0x747DD0);
ObjectFunc(MechTails_1C, 0x748CA0);
ObjectFunc(EWalker2PSpecialMan, 0x749A30);
ObjectFunc(EWalker2PLaserMan, 0x749E60);
ObjectFunc(WalkerTimeSubtractingTask, 0x74AA90);
ObjectFunc(Tails_Main, 0x74D170);
FunctionPointer(void, Tails_RunActions, (EntityData1* data1, EntityData2* data2, CharObj2Base* co2, TailsCharObj2* tco2), 0x74DC60);
ObjectFunc(Tails_Delete, 0x74FC60);
ObjectFunc(Tails_Display, 0x7507D0);
FunctionPointer(int, NBarrier_Load, (char), 0x753210);
FunctionPointer(int, TBarrier_Load, (char), 0x753280);
FunctionPointer(ObjectMaster*, LoadInvincibility, (char player), 0x7532F0);
ObjectFunc(Barrier_Unknown, 0x7533B0);
ObjectFunc(TBarrier, 0x7533E0);
ObjectFunc(TBarrier_Child, 0x7534B0);
ObjectFunc(TBarrier_Unknown, 0x753580);
ObjectFunc(TProminence, 0x7538D0);
ObjectFunc(NBarrier, 0x753D40);
ObjectFunc(NBarrier_Unknown, 0x753E30);
ObjectFunc(Invincibility_Unknown, 0x753FC0);
ObjectFunc(Invincibility_Main, 0x754150);
FunctionPointer(double, CrashStar_Load, (), 0x7543C0);
ObjectFunc(CrashStar_Main, 0x754610);
ObjectFunc(ConfuStar_Main, 0x7547C0);
FunctionPointer(int, ConfuStar_Load, (char), 0x7548D0);
ObjectFunc(PowderExecute_Main, 0x754DF0);
ObjectFunc(WaveExecute, 0x7550D0);
ObjectFunc(GunfireExecute, 0x7554F0);
ObjectFunc(LineExecute, 0x755A60);
FunctionPointer(int, LoadSonEffTex, (), 0x755DA0);
FunctionPointer(int, LoadShadEffTex, (), 0x755DE0);
FunctionPointer(int, LoadAmyEffTex, (), 0x755E20);
FunctionPointer(int, LoadMetEffTex, (), 0x755E60);
ObjectFunc(exec_2, 0x7578B0);
ObjectFunc(LightAttackParticle_Render, 0x757B30);
ObjectFunc(SonicEffectChaosControlEffectExecutor, 0x758B60);
ObjectFunc(MSJetExecutor, 0x759700);
ObjectFunc(ObjectMizuiki, 0x75A150);
ObjectFunc(EffectEctoplasmExecutor, 0x75ABE0);
ObjectFunc(PlayerEffectEctoplasmExecutor, 0x75AD10);
ObjectFunc(EffectWindCutterExecutor, 0x75B070);
ObjectFunc(EffectStormingHeartExecutor, 0x75B540);
ObjectFunc(EffectGeneratorStormingHeartExecutor, 0x75B620);
ObjectFunc(EffectKissHeartExecutor, 0x75BA30);
ObjectFunc(EffectChaosSpearExecutor, 0x75BD80);
ObjectFunc(EffectBlackWaveExecutor, 0x75C0B0);
ObjectFunc(EffectBlackWaveGenerator, 0x75C3A0);
ObjectFunc(exec_3, 0x75C5B0);
ObjectFunc(EffectThunderLightExecutor, 0x75C830);
ObjectFunc(EffectThunderExecutor, 0x75C930);
ObjectFunc(exec_4, 0x75D2F0);
ObjectFunc(WalkerBulletExecutor, 0x75D520);
ObjectFunc(WalkerBazookaExecutor, 0x75D9F0);
ObjectFunc(exec_5, 0x75E580);
ObjectFunc(WalkerJetExecutor, 0x75EC80);
ObjectFunc(exec_6, 0x761730);
ObjectFunc(BossPowerGuageExec_Main, 0x761C30);
ObjectFunc(BossTitleExec, 0x762E00);
FunctionPointer(int, LoadStg27Module, (), 0x7632B0);
VoidFunc(LostColony_Init, 0x7632C0);
ObjectFunc(LightBombExec_4, 0x763850);
ObjectFunc(BgInit_2, 0x763E90);
ObjectFunc(BgInit_2_Delete, 0x763EB0);
ObjectFunc(BgInit_2_Display, 0x763F00);
ObjectFunc(BgInit_2_field_20, 0x764400);
ObjectFunc(DmgColExec, 0x768A30);
VoidFunc(LoadLostColonyCharAnims, 0x7695F0);
FunctionPointer(int, LoadStg12Module, (), 0x76AA10);
FunctionPointer(int, WeaponsBed_Init, (), 0x76AA20);
ObjectFunc(BgExec_33, 0x76AF40);
VoidFunc(LoadWeaponsBedCharAnims, 0x770400);
FunctionPointer(int, LoadStg22Module, (), 0x7705E0);
FunctionPointer(int, CrazyGadget_Init, (), 0x7705F0);
ObjectFunc(ObjSetManExec_Main, 0x770AF0);
ObjectFunc(BgExec_34, 0x770D50);
VoidFunc(LoadCrazyGadgetCharAnims, 0x774160);
FunctionPointer(int, GetDllData, (LPCSTR lpProcName), 0x77DEF0);
FunctionPointer(void*, MemoryManager__Allocate, (int size, char* file, int line), 0x77DFA0);
FunctionPointer(void*, MemoryManager__AllocateArray, (int count, int size), 0x77DFB0);
FunctionPointer(void, MemoryManager__Deallocate2, (AllocatedMem* a1, size_t count), 0x77DFE0);
FunctionPointer(void, ___njClipZ, (float nearZ, float farZ), 0x77E700);
VoidFunc(UpdateControllers, 0x77E780);
FunctionPointer(void, FreeTexList, (NJS_TEXLIST* texlist), 0x77F9F0);
VoidFunc(njUnitMatrix_, 0x780E70);
FunctionPointer(void, DrawObjMotion, (NJS_OBJECT* a1), 0x782420);
FunctionPointer(int, LoadStg00Module, (), 0x786500);
FunctionPointer(int, LoadStg24Module, (), 0x786770);
FunctionPointer(int, EternalEngine_Init, (), 0x786780);
ObjectFunc(ObjSetManExec_4, 0x786D10);
ObjectFunc(BgExec_35, 0x7870A0);
FunctionPointer(int, CAPSULEBOMB, (ObjectMaster* a1), 0x787830);
FunctionPointer(int, TaVibExe_LoadB, (), 0x78A090);
ObjectFunc(DrrTamaExec, 0x78AE20);
VoidFunc(LoadEternalEngineCharAnims, 0x78B780);
ObjectFunc(TaVibExec, 0x78C160);
FunctionPointer(int, TaVibExe_Load, (int, char, char, int), 0x78C1C0);
ObjectFunc(HatchAirExec, 0x7919B0);
FunctionPointer(int, LoadOtherprintModule, (), 0x791E50);
ObjectFunc(execSegalogo, 0x7920F0);
ObjectFunc(execTentoEnding, 0x7927F0);
FunctionPointer(int, LoadStg51Module, (), 0x792970);
FunctionPointer(int, DeckRace_Init, (), 0x792980);
ObjectFunc(BgmStart_WeaponsBed, 0x792E40);
FunctionPointer(int, LoadEndingModule, (), 0x7930E0);
FunctionPointer(int, LoadStg39Module, (), 0x793250);
FunctionPointer(int, MissionStreet2P_Init, (), 0x793260);
ObjectFunc(BgmStart_MissionStreet, 0x7936C0);
ObjectFunc(cartAWindowExec, 0x795630);
FunctionPointer(UnknownData2*, AllocateUnknownData2, (ObjectMaster* obj), 0x7966D0);
ObjectFunc(getEmblemExec, 0x798600);
ObjectFunc(execCong, 0x798EC0);
ObjectFunc(starffRollExec, 0x799270);
FunctionPointer(int, GOALDOOR, (ObjectMaster* a1), 0x79AF10);
ObjectFunc(DrrTamaExec_Main, 0x79ECA0);
ObjectFunc(DrrTamaExec_Delete, 0x79EF30);
ObjectFunc(DrrTamaExec_Display, 0x79EFB0);
ObjectFunc(ManGCylExecutor, 0x7A36F0);
FunctionPointer(void, sa2_srand, (unsigned int), 0x7A89C6);
VoidFunc(sa2_rand, 0x7A89D8);
FunctionPointer(int, nullsub_2, (), 0x7B4AEF);
FunctionPointer(int, nullsub_3, (), 0x7F4700);
StdcallFunctionPointer(int, nullsub_7, (int), 0x8331D0);
StdcallFunctionPointer(int, nullsub_9, (int, int), 0x840AE0);
FunctionPointer(int, nullsub_14, (), 0x863DD0);
StdcallFunctionPointer(int, nullsub_12, (int), 0x868810);
StdcallFunctionPointer(int, nullsub_10, (int), 0x8688F0);
StdcallFunctionPointer(int, nullsub_11, (int, int), 0x868960);
VoidFunc(nullsub_8, 0x8704F0);
VoidFunc(nullsub_6, 0x870580);
VoidFunc(nullsub_4, 0x870590);
FunctionPointer(void, PGetRotation, (EntityData1* data, EntityData2* data2, CharObj2Base* co2), 0x45FA70);
FunctionPointer(JiggleInfo*, LoadJiggle, (NJS_OBJECT* jiggle), 0x447580);
FunctionPointer(void, DrawObject, (NJS_OBJECT* a1), 0x42E730);
FunctionPointer(void, SuperSonicGetAccel, (EntityData1* data, EntityData2* data2, CharObj2Base* co2), 0x49D870);
ObjectFunc(SpinDashAura_Display, 0x756040);
ObjectFunc(JumpAura_Display, 0x756960);
ObjectFunc(HomingAura_Display, 0x756520);
ObjectFunc(Dynamite_Main, 0x6da880);
ObjectFunc(DynamiteHiddenBase_Main, 0x714610);
ObjectFunc(DynamiteSandOcean_Main, 0x65AEA0);
ObjectFunc(PrisonLaneDoor, 0x606400);
ObjectFunc(CGTubeGlass, 0x776060);
ObjectFunc(MetalBox, 0x6D6490);
ObjectFunc(MetalBoxGravity, 0x77BB90);
ObjectFunc(RocketIG, 0x6A10A0);
ObjectFunc(DoorIG, 0x69D1D0);
ObjectFunc(DoorIG2, 0x69F460);
ObjectFunc(DoorCCThing, 0x79AFB0);
ObjectFunc(DoorHB, 0x715560);
VoidFunc(ALCam_CameraManager, 0x57D4C0);
VoidFunc(AL_MinimalCreate, 0x549490);
VoidFunc(ALW_Control, 0x530B80);
FunctionPointer(void, LoadWaterManager, (ObjectMaster* waterPtr), 0x56B040);
VoidFunc(Chao_OOBLimit, 0x52B200);
VoidFunc(LoadSplashTextures, 0x6EDE40);
FunctionPointer(void, GetCharacterSurfaceInfo, (NJS_VECTOR* position, CharSurfaceInfo* surface), 0x494DF0);
FunctionPointer(BOOL, PResetAccelerationAir, (EntityData2* a1, EntityData1* a2, CharObj2Base* a3), 0x46E630);
FunctionPointer(void, PGetAcceleration, (EntityData1* data1, EntityData2* data2, CharObj2Base* co2), 0x45B610);
FunctionPointer(void, PlayerAfterImage, (NJS_OBJECT* a1, int a2, NJS_TEXLIST* a3, float a4, char a5), 0x476C20);
VoidFunc(InitCharacterSound, 0x438B00);
FunctionPointer(void, SetFogParamAndColor_, (int a2, float a3, float a4, int argC), 0x420510);

// HWND __usercall@<eax>(int nWidth@<eax>, HINSTANCE hInstance, int nHeight, unsigned __int8 isWindowed)
static const void* const CreateMainWindowPtr = (void*)0x4019D0;
static inline HWND CreateMainWindow(int nWidth, HINSTANCE hInstance, int nHeight, unsigned __int8 isWindowed)
{
	HWND result;
	__asm
	{
		movzx eax, [isWindowed]
		push eax
		push[nHeight]
		push[hInstance]
		mov eax, [nWidth]
		call CreateMainWindowPtr
		add esp, 12
		mov result, eax
	}
	return result;
}

// UserConfigData *__usercall@<eax>(LaunchConfig *a1@<ebx>)
static const void* const ReadConfigPtr = (void*)0x405310;
static inline UserConfigData* ReadConfig(LaunchConfig* a1)
{
	UserConfigData* result;
	__asm
	{
		mov ebx, [a1]
		call ReadConfigPtr
		mov result, eax
	}
	return result;
}

// void __usercall SetShaders(int id@<eax>)
static const void* const SetShadersPtr = (void*)0x41B1F0;
static inline void SetShaders(int id)
{
	__asm
	{
		mov eax, id
		call SetShadersPtr
	}
}

//void __usercall stSetBlendingMode(int dst@<edi>, int src@<esi>, Bool enable)
static const void* const stSetBlendingMode_ptr = (void*)0x420480;
static inline void stSetBlendingMode(NJD_COLOR_BLENDING src, NJD_COLOR_BLENDING dst, Bool enable)
{
	__asm
	{
		push[enable]
		mov edi, [dst]
		mov esi, [src]
		call stSetBlendingMode_ptr
		add esp, 4
	}
}

static const void* const njColorBlendingModePtr = (void*)0x426420;
static inline void njColorBlendingMode(NJD_COLOR_TARGET target, NJD_COLOR_BLENDING mode) // Needs NJD_CONTROL_3D_CNK_BLEND_MODE
{
	__asm
	{
		push[target]
		mov eax, mode
		call njColorBlendingModePtr
		add esp, 4
	}
}

// int __usercall@<eax>(char *path@<ecx>, void *a2@<edx>, size_t count)
static const void* const WriteSaveFileThingPtr = (void*)0x426760;
static inline int WriteSaveFileThing(char* path, void* a2, size_t count)
{
	int result;
	__asm
	{
		push[count]
		mov edx, [a2]
		mov ecx, [path]
		call WriteSaveFileThingPtr
		add esp, 4
		mov result, eax
	}
	return result;
}

// int __usercall@<eax>(char *path@<ecx>, void *buffer@<edx>, size_t size)
static const void* const ReadSaveFileThingPtr = (void*)0x426860;
static inline int ReadSaveFileThing(char* path, void* buffer, size_t _size)
{
	int result;
	__asm
	{
		push[_size]
		mov edx, [buffer]
		mov ecx, [path]
		call ReadSaveFileThingPtr
		add esp, 4
		mov result, eax
	}
	return result;
}

//void __usercall njCalcPoint@<eax>(NJS_MATRIX* result@<eax>, NJS_VECTOR* v@<edx>, NJS_VECTOR* transform@<ecx>, char additive)
static const void* const njCalcPointPtr = (void*)0x426CC0;
static inline void njCalcPoint(float* matrix, NJS_VECTOR* v, NJS_VECTOR* transform, char additive)
{
	__asm
	{
		movzx eax, [additive]
		push eax
		mov ecx, [transform]
		mov edx, [v]
		mov eax, [matrix]
		call njCalcPointPtr
		add esp, 4;
	}
}

//void __usercall njUnitMatrixV(NJS_MATRIX_PTR m@<eax>, float x, float y, float z)
static const void* const njUnitMatrixVPtr = (void*)0x426FF0;
static inline void njUnitMatrixV(NJS_MATRIX_PTR m, float x, float y, float z)
{
	__asm
	{
		push[z]
		push[y]
		push[x]
		mov eax, [m]
		call njUnitMatrixVPtr
		add esp, 12
	}
}

//void __usercall njCalcVector(NJS_VECTOR *transform@<eax>, NJS_VECTOR *v@<edx>, NJS_MATRIX_PTR m@<ecx>)
static const void* const njCalcVectorPtr = (void*)0x4273B0;
static inline void njCalcVector(NJS_VECTOR* transform, NJS_VECTOR* v, NJS_MATRIX_PTR m)
{
	__asm
	{
		mov ecx, [m]
		mov edx, [v]
		mov eax, [transform]
		call njCalcVectorPtr
	}
}

// void __usercall(NJS_MATRIX_PTR m@<eax>, float x, float y, float z)
static const void* const njTranslate_Ptr = (void*)0x427470;
static inline void njTranslate_(NJS_MATRIX_PTR m, float x, float y, float z)
{
	__asm
	{
		push[z]
		push[y]
		push[x]
		mov eax, [m]
		call njTranslate_Ptr
		add esp, 12
	}
}

// void __usercall(float *a1@<ebx>, signed int a2)
static const void* const njRotateX_Ptr = (void*)0x4274E0;
static inline void njRotateX_(float* a1, signed int a2)
{
	__asm
	{
		push[a2]
		mov ebx, [a1]
		call njRotateX_Ptr
		add esp, 4
	}
}

// void __usercall(float *a1@<ebx>, signed int a2)
static const void* const njRotateY_Ptr = (void*)0x4275B0;
static inline void njRotateY_(float* a1, signed int a2)
{
	__asm
	{
		push[a2]
		mov ebx, [a1]
		call njRotateY_Ptr
		add esp, 4
	}
}

// void __usercall(float *a1@<ebx>, signed int a2)
static const void* const njRotateZ_Ptr = (void*)0x427680;
static inline void njRotateZ_(float* a1, signed int a2)
{
	__asm
	{
		push[a2]
		mov ebx, [a1]
		call njRotateZ_Ptr
		add esp, 4
	}
}

//void __usercall njRotateEx(Rotation *rot@<eax>, int use_yxz)
static const void* const njRotateExPtr = (void*)0x4277B0;
static inline char njRotateEx(Rotation* rot, int use_yxz)
{
	__asm
	{
		push[use_yxz]
		mov eax, [rot]
		call njRotateExPtr
		add esp, 4
	}
}

//void __usercall LoadOmochaoHint(int language@<esi>)
static const void* const LoadTipsTexsPtr = (void*)0x427EF0;
static inline void LoadTipsTexs(int language)
{
	__asm
	{
		mov esi, [language]
		call LoadTipsTexsPtr
	}
}

// void __usercall njTranslateEx(NJS_VECTOR* v@<eax>)
static const void* const njTranslateExPtr = (void*)0x428A30;
static inline void njTranslateEx(NJS_VECTOR* v)
{
	__asm
	{
		mov eax, [v]
		call njTranslateExPtr
	}
}

//void __usercall njRotateZYX(signed int x@<eax>, signed int y@<edi>, NJS_MATRIX_PTR m@<esi>, signed int z)
static const void* const njRotateZYXPtr = (void*)0x429020;
static inline void njRotateZYX(Angle x, Angle y, NJS_MATRIX_PTR m, Angle z)
{
	__asm
	{
		push[z]
		mov esi, [m]
		mov edi, [y]
		mov eax, [x]
		call njRotateZYXPtr
		add esp, 4
	}
}

//void __usercall njScaleV_(NJS_VECTOR *v@<eax>)
static const void* const njScaleV_Ptr = (void*)0x429740;
static inline void njScaleV_(NJS_VECTOR* v)
{
	__asm
	{
		mov eax, [v]
		call njScaleV_Ptr
	}
}

// char __usercall@<al>(void *a1@<esi>)
static const void* const IsByteswappedPtr = (void*)0x429840;
static inline char IsByteswapped(void* a1)
{
	char result;
	__asm
	{
		mov esi, [a1]
		call IsByteswappedPtr
		mov result, al
	}
	return result;
}

//void __usercall njRotateX_(signed int x@<eax>, NJS_MATRIX_PTR m@<ecx>)
static const void* const njRotateXPtr = (void*)0x42ADB0;
static inline void njRotateX(NJS_MATRIX_PTR m, Angle x)
{
	__asm
	{
		mov ecx, [m]
		mov eax, [x]
		call njRotateXPtr
	}
}

//void __usercall njRotateY_(signed int y@<eax>, NJS_MATRIX_PTR m@<ecx>)
static const void* const njRotateYPtr = (void*)0x42ADD0;
static inline void njRotateY(NJS_MATRIX_PTR m, Angle y)
{
	__asm
	{
		mov ecx, [m]
		mov eax, [y]
		call njRotateYPtr
	}
}

//void __usercall njRotateZ_(signed int z@<eax>, NJS_MATRIX_PTR m@<ecx>)
static const void* const njRotateZPtr = (void*)0x42ADF0;
static inline void njRotateZ(NJS_MATRIX_PTR m, Angle z)
{
	__asm
	{
		mov ecx, [m]
		mov eax, [z]
		call njRotateZPtr
	}
}

//void __usercall SetViewStuff(signed int fov@<esi>, float screen_ratio, float min_dist, float max_dist)
static const void* const SetViewStuffPtr = (void*)0x42B300;
static inline void SetViewStuff(signed int fov, float screen_ratio, float min_dist, float max_dist)
{
	__asm
	{
		push[max_dist]
		push[min_dist]
		push[screen_ratio]
		mov esi, [fov]
		call SetViewStuffPtr
		add esp, 12
	}
}

// void __usercall ___njSetPerspective(signed int a@<eax>)
static const void* const ___njSetPerspectivePtr = (void*)0x42C390;
static inline void ___njSetPerspective(Angle a)
{
	__asm
	{
		mov eax, [a]
		call ___njSetPerspectivePtr
	}
}

//void __usercall njCalcPoint_(NJS_VECTOR *transform@<eax>, NJS_VECTOR *v@<edx>, NJS_MATRIX_PTR m@<ecx>)
static const void* const njCalcPoint_Ptr = (void*)0x42F980;
static inline void njCalcPoint_(NJS_VECTOR* transform, NJS_VECTOR* v, NJS_MATRIX_PTR m)
{
	__asm
	{
		mov ecx, [m]
		mov edx, [v]
		mov eax, [transform]
		call njCalcPoint_Ptr
	}
}

// void __usercall LoadStageSounds(char *filename@<esi>, void *address)
static const void* const LoadStageSoundsPtr = (void*)0x4355A0;
static inline void LoadStageSounds(const char* filename, void* address)
{
	__asm
	{
		push[address]
		mov esi, [filename]
		call LoadStageSoundsPtr
		add esp, 4
	}
}

// void __usercall(int a1@<esi>, int a2, char a3, char a4)
static const void* const PlaySoundProbablyPtr = (void*)0x437260;
static inline void PlaySoundProbably(int a1, int a2, char a3, char a4)
{
	__asm
	{
		movzx eax, [a4]
		push eax
		movzx eax, [a3]
		push eax
		push[a2]
		mov esi, [a1]
		call PlaySoundProbablyPtr
		add esp, 12
	}
}

//char __usercall Play3DSound_Pos@<al>(int id@<edi>, NJS_VECTOR *pos@<esi>, int unk, char bank, char volume)
static const void* const Play3DSound_PosPtr = (void*)0x4372E0;
static inline char Play3DSound_Pos(int id, NJS_VECTOR* pos, int unk, char bank, char volume)
{
	char result;
	__asm
	{
		movzx esi, [volume]
		push esi
		movzx esi, [bank]
		push esi
		push[unk]
		mov esi, [pos]
		mov edi, [id]
		call Play3DSound_PosPtr
		mov result, al
		add esp, 12
	}
	return result;
}

//char __usercall Play3DSound_EntityAndPos@<al>(EntityData1* entity@<ebx>, int id@<edi>, int pos@<esi>, char volume)
static const void* const Play3DSound_EntityAndPosPtr = (void*)0x437420;
static inline char Play3DSound_EntityAndPos(EntityData1* entity, int id, NJS_VECTOR* pos, char volume)
{
	char result;
	__asm
	{
		movzx esi, [volume]
		push esi
		mov esi, [pos]
		mov edi, [id]
		mov ebx, [entity]
		call Play3DSound_EntityAndPosPtr
		mov result, al
		add esp, 4
	}
	return result;
}

// void __usercall(int pnum@<eax>, signed int a2@<edx>, signed int a3@<ecx>, int a4)
static const void* const KnockBackRumblePtr = (void*)0x438F80;
static inline void KnockBackRumble(int pnum, signed int a2, signed int a3, int a4)
{
	__asm
	{
		push[a4]
		mov ecx, [a3]
		mov edx, [a2]
		mov eax, [pnum]
		call KnockBackRumblePtr
		add esp, 4
	}
}

// void __usercall(const char* file@<edi>)
static const void* const WriteDemoBufferToFile_ptr = (void*)0x43A730;
static inline void WriteDemoBufferToFile(const char* file)
{
	__asm
	{
		mov edi, [file]
		call WriteDemoBufferToFile_ptr
	}
}

// void __usercall(__int16 stageNumber@<ax>)
static const void* const SetCurrentLevelPtr = (void*)0x43D8A0;
static inline void SetCurrentLevel(__int16 stageNumber)
{
	__asm
	{
		mov ax, [stageNumber]
		call SetCurrentLevelPtr
	}
}

// Sint32 __usercall@<eax>(int playerNumber@<ecx>, NJS_VECTOR *position@<edi>, Rotation *rotation)
static const void* const LoadStartPositionPtr = (void*)0x43D8E0;
static inline Sint32 LoadStartPosition(int playerNumber, NJS_VECTOR* position, Rotation* rotation)
{
	Sint32 result;
	__asm
	{
		push[rotation]
		mov edi, [position]
		mov ecx, [playerNumber]
		call LoadStartPositionPtr
		add esp, 4
		mov result, eax
	}
	return result;
}

// void __usercall(int n@<eax>)
static const void* const InitPlayerPtr = (void*)0x43DA40;
static inline void InitPlayer(int n)
{
	__asm
	{
		mov eax, [n]
		call InitPlayerPtr
	}
}

// void __usercall(int a1@<eax>)
static const void* const Load2PIntroPosPtr = (void*)0x43DBD0;
static inline void Load2PIntroPos(int a1)
{
	__asm
	{
		mov eax, [a1]
		call Load2PIntroPosPtr
	}
}

// signed int __usercall@<eax>(int playerNum@<eax>)
static const void* const LoadEndPosition_Mission23Ptr = (void*)0x43DD50;
static inline signed int LoadEndPosition_Mission23(int playerNum)
{
	signed int result;
	__asm
	{
		mov eax, [playerNum]
		call LoadEndPosition_Mission23Ptr
		mov result, eax
	}
	return result;
}

// void __usercall(int playerNum@<eax>)
static const void* const LoadEndPositionPtr = (void*)0x43DF30;
static inline void LoadEndPosition(int playerNum)
{
	__asm
	{
		mov eax, [playerNum]
		call LoadEndPositionPtr
	}
}

// void __usercall(signed int n@<esi>)
static const void* const AwardWinPtr = (void*)0x43E6D0;
static inline void AwardWin(signed int n)
{
	__asm
	{
		mov esi, [n]
		call AwardWinPtr
	}
}

// void __usercall(int pnum@<esi>)
static const void* const PlayWinnerVoiceProbablyPtr = (void*)0x43ECA0;
static inline void PlayWinnerVoiceProbably(int pnum)
{
	__asm
	{
		mov esi, [pnum]
		call PlayWinnerVoiceProbablyPtr
	}
}

// void __usercall(const char *song@<edi>)
static const void* const PlayMusicPtr = (void*)0x442CF0;
static inline void PlayMusic(const char* song)
{
	__asm
	{
		mov edi, [song]
		call PlayMusicPtr
	}
}

static const void* const PlayJinglePtr = (void*)0x00443480;
// Plays specified song once, then restores previous song as set by PlayMusic.
static inline void PlayJingle(const char* song)
{
	__asm
	{
		mov ebx, [song]
		call PlayJinglePtr
	}
}

// void __usercall(const char *a1@<edi>)
static const void* const _PlayMusicOncePtr = (void*)0x442E60;
static inline void _PlayMusicOnce(const char* a1)
{
	__asm
	{
		mov edi, [a1]
		call _PlayMusicOncePtr
	}
}

// void __usercall(int a1@<ecx>, const char *a2@<edi>)
static const void* const PlayMusicOncePtr = (void*)0x442EF0;
static inline void PlayMusicOnce(int a1, const char* a2)
{
	__asm
	{
		mov edi, [a2]
		mov ecx, [a1]
		call PlayMusicOncePtr
	}
}

// signed int __usercall@<eax>(int idk@<edx>, int num)
static const void* const PlayVoicePtr = (void*)0x443130;
static inline signed int PlayVoice(int idk, int num)
{
	signed int result;
	__asm
	{
		push[num]
		mov edx, [idk]
		call PlayVoicePtr
		add esp, 4
		mov result, eax
	}
	return result;
}

// void __usercall(const char *song@<eax>)
static const void* const PlaySong_QueuePtr = (void*)0x443530;
static inline void PlaySong_Queue(const char* song)
{
	__asm
	{
		mov eax, [song]
		call PlaySong_QueuePtr
	}
}

// void __usercall(int a1@<eax>)
static const void* const SetWorkingSavePtr = (void*)0x445310;
static inline void SetWorkingSave(int a1)
{
	__asm
	{
		mov eax, [a1]
		call SetWorkingSavePtr
	}
}

static const void* const OnConstantAttrPtr = (void*)0x446CF0;
static inline void OnConstantAttr(int soc_and, int soc_or)
{
	__asm
	{
		mov eax, [soc_and]
		mov ecx, [soc_or]
		call OnConstantAttrPtr
	}
}

static const void* const OnControl3DPtr = (void*)0x446D20;
static inline void OnControl3D(int flag)
{
	__asm
	{
		mov eax, [flag]
		call OnControl3DPtr
	}
}

static const void* const OffControl3DPtr = (void*)0x446D30;
static inline void OffControl3D(int flag)
{
	__asm
	{
		mov eax, [flag]
		call OffControl3DPtr
	}
}

// void __usercall(TexPackInfo *pack@<eax>)
static const void* const LoadTexturesPtr = (void*)0x44C2D0;
static inline void LoadTextures(TexPackInfo* pack)
{
	__asm
	{
		mov eax, [pack]
		call LoadTexturesPtr
	}
}

// void __usercall(TexPackInfo* a1@<eax>, NJS_TEXLIST*** a2)
static const void* const LoadTexPacksPtr = (void*)0x44C7B0;
static inline void LoadTexPacks(TexPackInfo* TexPackList, NJS_TEXLIST*** Texlists)
{
	__asm
	{
		push[Texlists]
		mov eax, [TexPackList]
		call LoadTexPacksPtr
		add esp, 4
	}
}

// void __usercall(NJS_TEXLIST*** a1@<eax>, TexPackInfo* a2@<ecx>)
static const void* const FreeTexPacksPtr = (void*)0x44C810;
static inline void FreeTexPacks(NJS_TEXLIST*** Texlists, TexPackInfo* TexPackList)
{
	__asm
	{
		mov ecx, [TexPackList]
		mov eax, [Texlists]
		call FreeTexPacksPtr
	}
}

// void __usercall(char id@<al>, __int16 count@<bx>)
static const void* const AddLivesPtr = (void*)0x44CB10;
static inline void AddLives(char id, __int16 count)
{
	__asm
	{
		mov bx, [count]
		mov al, [id]
		call AddLivesPtr
	}
}

// void __usercall(char playerNum@<al>, int numRings@<edx>)
static const void* const AddRingsPtr = (void*)0x44CE10;
static inline void AddRings(char playerNum, int numRings)
{
	__asm
	{
		mov edx, [numRings]
		mov al, [playerNum]
		call AddRingsPtr
	}
}

// void __usercall(int a1@<eax>)
static const void* const AddScorePtr = (void*)0x44D2D0;
static inline void AddScore(int a1)
{
	__asm
	{
		mov eax, [a1]
		call AddScorePtr
	}
}

// void __usercall(signed int a1@<ebx>)
static const void* const DispTechniqueScore_LoadPtr = (void*)0x44D910;
static inline void DispTechniqueScore_Load(signed int a1)
{
	__asm
	{
		mov ebx, [a1]
		call DispTechniqueScore_LoadPtr
	}
}

// void __usercall(const Number* number@<eax>)
static const void* const RenderNumber_ptr = (void*)0x44EB00;
static inline void* RenderNumber(const Number* number)
{
	__asm
	{
		mov eax, [number]
		call RenderNumber_ptr
	}
}

// void __usercall(DemoInput* buffer@<eax>)
static const void* const ByteswapDemoInput_ptr = (void*)0x454450;
static inline void ByteswapDemoInput(DemoInput* buffer)
{
	__asm
	{
		mov eax, [buffer]
		call ByteswapDemoInput_ptr
	}
}

// void *__usercall@<eax>(const char *a1@<eax>)
static const void* const LoadPRSFilePtr = (void*)0x4548C0;
static inline void* LoadPRSFile(const char* a1)
{
	void* result;
	__asm
	{
		mov eax, [a1]
		call LoadPRSFilePtr
		mov result, eax
	}
	return result;
}

//void __usercall LoadCharacterSoundBanks(int character@<ebx>, MLTSoundList *OutputSoundList, MLTSoundList *OutputVoiceList)
static const void* const LoadCharacterSoundBanksPtr = (void*)0x459100;
static inline void* LoadCharacterSoundBanks(int character, MLTSoundList* OutputSoundList, MLTSoundList* OutputVoiceList)
{
	__asm
	{
		push[OutputVoiceList]
		push[OutputSoundList]
		mov ebx, [character]
		call LoadCharacterSoundBanksPtr
		add esp, 8
	}
}

// ModelIndex *__usercall@<eax>(char *filename@<eax>)
static const void* const LoadMDLFilePtr = (void*)0x459590;
static inline ModelIndex* LoadMDLFile(char* filename)
{
	ModelIndex* result;
	__asm
	{
		mov eax, [filename]
		call LoadMDLFilePtr
		mov result, eax
	}
	return result;
}

// void __usercall(ModelIndex *a1@<esi>)
static const void* const ReleaseMDLFilePtr = (void*)0x4596D0;
static inline void ReleaseMDLFile(ModelIndex* a1)
{
	__asm
	{
		mov esi, [a1]
		call ReleaseMDLFilePtr
	}
}

// AnimationIndex *__usercall@<eax>(char *filename@<eax>)
static const void* const LoadMTNFilePtr = (void*)0x459740;
static inline AnimationIndex* LoadMTNFile(char* filename)
{
	AnimationIndex* result;
	__asm
	{
		mov eax, [filename]
		call LoadMTNFilePtr
		mov result, eax
	}
	return result;
}

// void __usercall(ObjectMaster *a1@<eax>, int a2@<ecx>)
static const void* const SetPhysicsParamsAndGiveUpgradesPtr = (void*)0x4599C0;
static inline void SetPhysicsParamsAndGiveUpgrades(ObjectMaster* a1, int a2)
{
	__asm
	{
		mov ecx, [a2]
		mov eax, [a1]
		call SetPhysicsParamsAndGiveUpgradesPtr
	}
}

//signed int __usercall GetAnalog@<eax>(EntityData1 *data@<eax>, CharObj2Base *co2, signed int *angle, float* magnitude)
static const void* const GetAnalogPtr = (void*)0x45A870;
static inline signed int GetAnalog(EntityData1* data, CharObj2Base* co2, Angle* angle, Float* magnitude)
{
	signed int result;
	__asm
	{
		push[magnitude]
		push[angle]
		push[co2]
		mov eax, [data]
		call GetAnalogPtr
		mov result, eax
		add esp, 12
	}
	return result;
}

//void __usercall CalcVector_PlayerRot(EntityData1 *data@<edi>, NJS_VECTOR *v@<esi>)
static const void* const CalcVector_PlayerRotPtr = (void*)0x468E70;
static inline void CalcVector_PlayerRot(EntityData1* data, NJS_VECTOR* v)
{
	__asm
	{
		mov esi, [v]
		mov edi, [data]
		call CalcVector_PlayerRotPtr
	}
}

// void __usercall(int id@<esi>)
static const void* const GiveAssistSpecialPtr = (void*)0x46AA80;
static inline void GiveAssistSpecial(int id)
{
	__asm
	{
		mov esi, [id]
		call GiveAssistSpecialPtr
	}
}

// signed int __usercall@<eax>(DeathZone *a1@<ebx>)
static const void* const LoadDeathZonesPtr = (void*)0x46B090;
static inline signed int LoadDeathZones(DeathZone* a1)
{
	signed int result;
	__asm
	{
		mov ebx, [a1]
		call LoadDeathZonesPtr
		mov result, eax
	}
	return result;
}

// void __usercall(int playerNum@<ebx>)
static const void* const KillPlayerPtr = (void*)0x46B110;
static inline void KillPlayer(int playerNum)
{
	__asm
	{
		mov ebx, [playerNum]
		call KillPlayerPtr
	}
}

// void __usercall(int pid@<ecx>, float speed_x, float speed_y, float speed_z)
static const void* const SetPlayerSpeedPtr = (void*)0x46C020;
static inline void SetPlayerSpeed(int pid, float speed_x, float speed_y, float speed_z)
{
	__asm
	{
		push[speed_z]
		push[speed_y]
		push[speed_x]
		mov ecx, [pid]
		call SetPlayerSpeedPtr
		add esp, 12
	}
}

// void __usercall(NJS_VECTOR *result@<eax>, Rotation *a2@<edx>, int a3@<ecx>, __int16 a4)
static const void* const SetPlayerSpeedIGuessPtr = (void*)0x46C340;
static inline void SetPlayerSpeedIGuess(NJS_VECTOR* result, Rotation* a2, int a3, __int16 a4)
{
	__asm
	{
		movzx eax, [a4]
		push eax
		mov ecx, [a3]
		mov edx, [a2]
		mov eax, [result]
		call SetPlayerSpeedIGuessPtr
		add esp, 4
	}
}

static const void* const IsPlayerInsideSpherePtr = (void*)0x46C730;
static inline int IsPlayerInsideSphere(NJS_POINT3* p, float r)
{
	int result;
	__asm
	{
		push[r]
		mov eax, [p]
		call IsPlayerInsideSpherePtr
		mov result, eax
		add esp, 4
	}
	return result;
}

// signed int __usercall@<eax>(int playerNum@<eax>)
static const void* const GetCharacterIDPtr = (void*)0x46DBD0;
static inline signed int GetCharacterID(int playerNum)
{
	signed int result;
	__asm
	{
		mov eax, [playerNum]
		call GetCharacterIDPtr
		mov result, eax
	}
	return result;
}

// int __usercall@<eax>(ObjectMaster *a1@<eax>)
static const void* const GetPlayerNumberPtr = (void*)0x46DCC0;
static inline int GetPlayerNumber(ObjectMaster* a1)
{
	int result;
	__asm
	{
		mov eax, [a1]
		call GetPlayerNumberPtr
		mov result, eax
	}
	return result;
}

// void __usercall(int a1@<eax>)
static const void* const PlayerSpeedUp_LoadPtr = (void*)0x46E120;
static inline void PlayerSpeedUp_Load(int a1)
{
	__asm
	{
		mov eax, [a1]
		call PlayerSpeedUp_LoadPtr
	}
}

// void __usercall(signed int n@<eax>)
static const void* const AwardMagneticBarrierPtr = (void*)0x46E180;
static inline void AwardMagneticBarrier(signed int n)
{
	__asm
	{
		mov eax, [n]
		call AwardMagneticBarrierPtr
	}
}

// void __usercall(int n@<eax>)
static const void* const AwardBarrierPtr = (void*)0x46E2E0;
static inline void AwardBarrier(int n)
{
	__asm
	{
		mov eax, [n]
		call AwardBarrierPtr
	}
}

// void __usercall(int playerNum@<eax>, float amount)
static const void* const AddHPPtr = (void*)0x46F4C0;
static inline void AddHP(int playerNum, float amount)
{
	__asm
	{
		push[amount]
		mov eax, [playerNum]
		call AddHPPtr
		add esp, 4
	}
}

// ObjectMaster *__usercall@<eax>(int list@<ecx>, const char *name@<eax>, void (__cdecl *mainSub)(ObjectMaster *)@<edi>, char flags)
static const void* const LoadObjectPtr = (void*)0x46F610;
static inline ObjectMaster* LoadObject(int list, const char* name, void(__cdecl* mainSub)(ObjectMaster*), char flags)
{
	ObjectMaster* result;
	__asm
	{
		movzx eax, [flags]
		push eax
		mov edi, [mainSub]
		mov eax, [name]
		mov ecx, [list]
		call LoadObjectPtr
		add esp, 4
		mov result, eax
	}
	return result;
}

static inline task* CreateElementalTask(int list, const char* name, void(__cdecl*exec)(task*), char flags)
{
	task* result;
	__asm
	{
		movzx eax, [flags]
		push eax
		mov edi, [exec]
		mov eax, [name]
		mov ecx, [list]
		call LoadObjectPtr
		add esp, 4
		mov result, eax
	}
	return result;
}
// ObjectMaster *__usercall@<eax>(void (__cdecl *mainSub)(ObjectMaster *)@<edi>, int list@<esi>, const char *name)
static const void* const AllocateObjectMasterPtr = (void*)0x46F680;
static inline ObjectMaster* AllocateObjectMaster(void(__cdecl* mainSub)(ObjectMaster*), int list, const char* name)
{
	ObjectMaster* result;
	__asm
	{
		push[name]
		mov esi, [list]
		mov edi, [mainSub]
		call AllocateObjectMasterPtr
		add esp, 4
		mov result, eax
	}
	return result;
}

// int __usercall@<eax>(int targetAlpha@<edx>)
static const void* const ScreenFadePtr = (void*)0x478730;
static inline int ScreenFade(int targetAlpha)
{
	int result;
	__asm
	{
		mov edx, [targetAlpha]
		call ScreenFadePtr
		mov result, eax
	}
	return result;
}

static const void* const EnemyInitializePtr = (void*)0x4788A0;
// Allocate enemy data with default values in obj->EntityData2
static inline EnemyData* EnemyInitialize(ObjectMaster* obj)
{
	EnemyData* result;
	__asm
	{
		mov edi, [obj]
		call EnemyInitializePtr
		mov result, eax
	}
	return result;
}

static const void* const EnemyInitializeWithEmeraldPtr = (void*)0x4789D0;
// Allocate enemy data with default values in obj->EntityData2 + set up emerald system for it (emerald id in LOBYTE(Data1->Rotation.y))
static inline EnemyData* EnemyInitializeWithEmerald(ObjectMaster* obj)
{
	EnemyData* result;
	__asm
	{
		mov eax, [obj]
		call EnemyInitializeWithEmeraldPtr
		mov result, eax
	}
	return result;
}

static const void* const EnemySearchPlayerPtr = (void*)0x478AB0;
// Check if player is in range / field of view, returns detected player id + 1
static inline Sint32 EnemySearchPlayer(EntityData1* data, EnemyData* edata)
{
	Sint32 result;
	__asm
	{
		mov esi, [data]
		mov ebx, [edata]
		call EnemySearchPlayerPtr
		mov result, eax
	}
	return result;
}

static const void* const EnemyGetShadowPtr = (void*)0x478D80;
// Perform raycast from edata->shadow->pos, set hit information in edata->shadow->hit (ignore water with E_FLAG_NOWATER)
static inline void EnemyGetShadow(EntityData1* data, EnemyData* edata)
{
	__asm
	{
		push[data]
		mov esi, [edata]
		call EnemyGetShadowPtr
		add esp, 4
	}
}

static const void* const EnemyCheckFloorGripPtr = (void*)0x478E90;
// Perform floor grip (threshold in edata->colli_top), set E_FLAG_FLOOR if on the floor
static inline void EnemyCheckFloorGrip(EntityData1* data, EnemyData* edata)
{
	__asm
	{
		mov edx, [data]
		mov ecx, [edata]
		call EnemyCheckFloorGripPtr
	}
}

static const void* const EnemyCheckFloorPtr = (void*)0x478EF0;
// Apply floor physics (friction, adapts velocity...), set some flags
static inline void EnemyCheckFloor(EntityData1* data, EnemyData* edata)
{
	__asm
	{
		mov edi, [data]
		mov esi, [edata]
		call EnemyCheckFloorPtr
	}
}

static const void* const EnemyCheckWallPtr = (void*)0x479070;
// Apply wall physics (stops the enemy, turns it, adapts its velocity...), set E_FLAG_HITWALL if enemy hit a wall
static inline void EnemyCheckWall(EntityData1* data, EnemyData* edata)
{
	__asm
	{
		mov ebx, [data]
		mov edi, [edata]
		call EnemyCheckWallPtr
	}
}

// Regular enemy collision function, always inlined in SA2
static inline void EnemyCheckGroundCollision(EntityData1* data, EnemyData* edata)
{
	EnemyGetShadow(data, edata);
	EnemyCheckFloorGrip(data, edata);
	EnemyCheckFloor(data, edata);
	EnemyCheckWall(data, edata);
}

// Copy enemy position in edata->home, always inlined in SA2
static inline void  EnemyPreserveHomePosition(EntityData1* data, EnemyData* edata)
{
	edata->home = data->Position;
}

// Copy enemy position in edata->pre, always inlined in SA2
static inline void  EnemyPreservePreviousPosition(EntityData1* data, EnemyData* edata)
{
	edata->pre = data->Position;
}

// Set enemy position to edata->pre, always inlined in SA2
static inline void EnemyBackToPreviousPosition(EntityData1* data, EnemyData* edata)
{
	data->Position = edata->pre;
}

static const void* const EnemyDrawShadowPtr = (void*)0x4799E0;
// Dreamcast shadow call for enemies, restored by Exant's "DC Shadows" mod
static inline void EnemyDrawShadow(EntityData1* data, EnemyData* edata)
{
	__asm
	{
		mov edx, [data]
		mov eax, [edata]
		call EnemyDrawShadowPtr
	}
}

static const void* const EnemyCheckEmeraldPtr = (void*)0x479AE0;
// Update emerald radar if the enemy contains an emerald
static inline void EnemyCheckEmerald(EntityData1* data, EnemyData* edata)
{
	__asm
	{
		mov ecx, [data]
		mov eax, [edata]
		call EnemyCheckEmeraldPtr
	}
}

static const void* const EnemyTurnToAimPtr = (void*)0x479B70;
// Horizontal turn toward edata->aim at edata->angy_spd speed
static inline void EnemyTurnToAim(EntityData1* data, EnemyData* edata)
{
	__asm
	{
		mov ebx, [data]
		mov eax, [edata]
		call EnemyTurnToAimPtr
	}
}

static const void* const EnemyTurnToHomePtr = (void*)0x479C50;
// Horizontal turn toward edata->home at edata->angy_spd speed
static inline void EnemyTurnToHome(EntityData1* data, EnemyData* edata)
{
	__asm
	{
		mov ebx, [data]
		mov eax, [edata]
		call EnemyTurnToHomePtr
	}
}

static const void* const EnemySetSphereLimitPtr = (void*)0x479CE0;
// Keep enemy into a sphere (around edata->home.xyz with radius "dist")
static inline void EnemySetSphereLimit(EntityData1* data, EnemyData* edata, Float dist)
{
	__asm
	{
		push [dist]
		push [data]
		mov eax, [edata]
		call EnemySetSphereLimitPtr
		add esp, 8
	}
}

static const void* const EnemySetCircleLimitPtr = (void*)0x479DB0;
// Keep enemy into a circle (around edata->home.xz with radius "dist")
static inline void EnemySetCircleLimit(EntityData1* data, EnemyData* edata, Float dist)
{
	__asm
	{
		push[dist]
		mov ebx, [data]
		mov edi, [edata]
		call EnemySetCircleLimitPtr
		add esp, 4
	}
}

static const void* const EnemyDist2FromPlayerPtr = (void*)0x479E70;
// Get square distance between enemy and player positions 
static inline float EnemyDist2FromPlayert(EntityData1* data, Sint32 num)
{
	float result;
	__asm
	{
		mov eax, [num]
		mov ecx, [data]
		call EnemyDist2FromPlayerPtr
		mov result, eax
	}
	return result;
}

static const void* const EnemyTurnToPlayerPtr = (void*)0x479F10;
// Horizontal turn toward player pnum at edata->angy_spd speed
static inline void EnemyTurnToPlayer(EntityData1* data, EnemyData* edata, Sint32 pnum)
{
	__asm
	{
		mov ecx, [pnum]
		mov ebx, [data]
		mov eax, [edata]
		call EnemyTurnToPlayerPtr
	}
}

static const void* const EnemyCheckFrameInPtr = (void*)0x479FA0;
// Check if the enemy is visible on screen
static inline Bool EnemyCheckFrameIn(NJS_POINT3* pos)
{
	Bool result;
	__asm
	{
		mov esi, [pos]
		call EnemyCheckFrameInPtr
		mov result, eax
	}
	return result;
}

static const void* const CreateExpSpringPtr = (void*)0x47A770;
// Creates a spring effect when enemies explode, number of springs in "num"
static inline void CreateExpSpring(NJS_POINT3* pos, Angle3* ang, Sint32 num)
{
	__asm
	{
		push[ang]
		push[num]
		mov edi, [pos]
		call CreateExpSpringPtr
		add esp, 8
	}
}

static const void* const EnemyBuyoScalePtr = (void*)0x47A930;
// Run enemy scale distortion effect when hit
static inline void EnemyBuyoScale(EntityData1* data, EnemyData* edata)
{
	__asm
	{
		mov ecx, [data]
		mov eax, [edata]
		call EnemyBuyoScalePtr
	}
}

static const void* const EnemyBumpPlayerPtr = (void*)0x47A9C0;
// Make player bounce and controller rumble when enemy is hit
static inline void EnemyBumpPlayer(Sint32 pnum)
{
	__asm
	{
		mov esi, [pnum]
		call EnemyBumpPlayerPtr
	}
}

static const void* const EnemyCheckDamagePtr = (void*)0x47AA70;
// Check if the enemy has been hit by a player/missile, also calls EnemyBumpPlayer on players
static inline Bool EnemyCheckDamage(EntityData1* data, EnemyData* edata)
{
	Bool result;
	__asm
	{
		push[edata]
		mov eax, [data]
		call EnemyCheckDamagePtr
		mov result, eax
		add esp, 4
	}
	return result;
}

static const void* const EnemySetDeadPtr = (void*)0x47ABB0;
// Runs different things (minimal/drive spawning, switch state, effect) when enemy is destroyed
static inline void EnemySetDead(EntityData1* data, EnemyData* edata)
{
	__asm
	{
		push[edata]
		mov eax, [data]
		call EnemySetDeadPtr
		add esp, 4
	}
}

static const void* const EnemySetMotionPtr = (void*)0x47AE10;
// Run animation system for enemies
static inline void EnemySetMotion(EnemyMotionData* mdata)
{
	__asm
	{
		mov ecx, [mdata]
		call EnemySetMotionPtr
	}
}

//void __usercall DynCol_Add(SurfaceFlags flags@<eax>, ObjectMaster *obj@<edx>, NJS_OBJECT *object@<esi>)
static const void* const DynCol_AddPtr = (void*)0x47D6B0;
static inline void DynCol_Add(SurfaceFlags flags, ObjectMaster* obj, NJS_OBJECT* object)
{
	__asm
	{
		mov esi, [object]
		mov edx, [obj]
		mov eax, [flags]
		call DynCol_AddPtr
	}
}

// signed int __usercall@<eax>(ObjectMaster *obj@<eax>, CollisionData *collision, int count, unsigned __int8 a4)
static const void* const InitCollisionPtr = (void*)0x47E520;
static inline signed int InitCollision(ObjectMaster* obj, CollisionData* collision, int count, unsigned __int8 a4)
{
	signed int result;
	__asm
	{
		movzx eax, [a4]
		push eax
		push[count]
		push[collision]
		mov eax, [obj]
		call InitCollisionPtr
		add esp, 12
		mov result, eax
	}
	return result;
}

// signed int __usercall@<eax>(unsigned __int8 a1@<bl>, ObjectMaster *a2@<edi>, CollisionData *a3, __int16 a4)
static const void* const InitCollision_0Ptr = (void*)0x47E620;
static inline signed int InitCollision_0(unsigned __int8 a1, ObjectMaster* a2, CollisionData* a3, __int16 a4)
{
	signed int result;
	__asm
	{
		movzx eax, [a4]
		push eax
		push[a3]
		mov edi, [a2]
		mov bl, [a1]
		call InitCollision_0Ptr
		add esp, 8
		mov result, eax
	}
	return result;
}

//void __usercall Collision_InitThings(ObjectMaster *obj@<eax>)
static const void* const Collision_InitThingsPtr = (void*)0x47E6C0;
static inline void Collision_InitThings(ObjectMaster* obj)
{
	__asm
	{
		mov eax, [obj]
		call Collision_InitThingsPtr
	}
}

// void __usercall(ObjectMaster *a1@<esi>)
static const void* const AddToCollisionListPtr = (void*)0x47E750;
static inline void AddToCollisionList(ObjectMaster* object)
{
	__asm
	{
		mov esi, [object]
		call AddToCollisionListPtr
	}
}

//ObjectMaster *__usercall GetCollidingPlayer@<eax>(ObjectMaster *obj@<eax>)
static const void* const GetCollidingPlayerPtr = (void*)0x486500;
static inline ObjectMaster* GetCollidingPlayer(ObjectMaster* obj)
{
	ObjectMaster* result;
	__asm
	{
		mov eax, [obj]
		call GetCollidingPlayerPtr
		mov result, eax
	}
	return result;
}

//bool __usercall SETDistanceCheckThing2P@<eax>(NJS_VECTOR *from@<eax>, NJS_VECTOR *p2pos@<ecx>, float x, float y, float z, float dist)
static const void* const SETDistanceCheckThing2PPtr = (void*)0x4881F0;
static inline bool SETDistanceCheckThing2P(NJS_VECTOR* from, NJS_VECTOR* p2pos, float x, float y, float z, float dist)
{
	int result;
	__asm
	{
		push[dist]
		push[z]
		push[y]
		push[x]
		mov ecx, [p2pos]
		mov eax, [from]
		call SETDistanceCheckThing2PPtr
		mov result, eax
		add esp, 16
	}
	return result;
}

// bool __usercall@<eax>(NJS_VECTOR *a1@<ecx>, float x, float y, float z, float distance_maybe)
static const void* const SETDistanceCheckThingPtr = (void*)0x488340;
static inline bool SETDistanceCheckThing(NJS_VECTOR* a1, float x, float y, float z, float distance_maybe)
{
	bool result;
	__asm
	{
		push[distance_maybe]
		push[z]
		push[y]
		push[x]
		mov ecx, [a1]
		call SETDistanceCheckThingPtr
		add esp, 16
		mov result, al
	}
	return result;
}

//signed int __usercall ClipSetObject@<eax>(ObjectMaster *obj@<edx>)
static const void* const ClipSetObjectPtr = (void*)0x488C50;
static inline int ClipSetObject(ObjectMaster* obj)
{
	int result;
	__asm
	{
		mov edx, [obj]
		call ClipSetObjectPtr
		mov result, eax
	}
	return result;
}

//int __usercall ClipObject@<eax>(ObjectMaster* obj@<edx>, float distance)
static const void* const ClipObjectPtr = (void*)0x488C80;
static inline int ClipObject(ObjectMaster* obj, float distance)
{
	int result;
	__asm
	{
		push[distance]
		mov edx, [obj]
		call ClipObjectPtr
		add esp, 4
		mov result, eax
	}
	return result;
}

//void __usercall UpdateSetDataAndDelete(ObjectMaster *obj@<eax>)
static const void* const UpdateSetDataAndDeletePtr = (void*)0x488DA0;
static inline void UpdateSetDataAndDelete(ObjectMaster* obj)
{
	__asm
	{
		mov eax, [obj]
		call UpdateSetDataAndDeletePtr
	}
}

// void *__usercall@<eax>(int size@<eax>, char *name_s@<ecx>, char *name_u)
static const void* const LoadSETFilePtr = (void*)0x488DD0;
static inline void* LoadSETFile(int _size, char* name_s, char* name_u)
{
	void* result;
	__asm
	{
		push[name_u]
		mov ecx, [name_s]
		mov eax, [_size]
		call LoadSETFilePtr
		add esp, 4
		mov result, eax
	}
	return result;
}

// void* __usercall@<eax>(char *filename@<ecx>, int size)
static const void* const LoadStageSETFilePtr = (void*)0x488F60;
static inline void* LoadStageSETFile(char* filename, int buffersize)
{
	void* result;
	__asm
	{
		push[buffersize]
		mov ecx, [filename]
		call LoadStageSETFilePtr
		add esp, 4
		mov result, eax
	}
	return result;
}

// signed int __usercall CL_ColPolCheckTouchRe@<eax>(NJS_OBJECT* chkobj@<eax>, csts* ctp, int skip_thing)
static const void* const CL_ColPolCheckTouchRePtr = (void*)0x48CE40;
// Checks intersection between a basic object and the input data from csts, and fills the csts output data.
static inline int CL_ColPolCheckTouchRe(NJS_OBJECT* chkobj, csts* ctp, int skip_thing)
{
	int result;
	__asm
	{
		push[skip_thing]
		push[ctp]
		mov eax, [chkobj]
		call CL_ColPolCheckTouchRePtr
		add esp, 8
		mov result, eax
	}
	return result;
}

// void __usercall(NJS_VECTOR *a1@<ebx>)
static const void* const ChaosDrive_LoadPtr = (void*)0x48F8E0;
static inline void ChaosDrive_Load(NJS_VECTOR* a1)
{
	__asm
	{
		mov ebx, [a1]
		call ChaosDrive_LoadPtr
	}
}

//sp_task* __usercall SpCreateTask@<eax>(sp_info *info@<ebx>)
static const void* const SpCreateTaskPtr = (void*)0x492660;
static inline sp_task* SpCreateTask(sp_info* info) // Loads a task from a sprite info, returns task pointer
{
	sp_task* result;
	__asm
	{
		mov ebx, [info]
		call SpCreateTaskPtr
		mov result, eax
	}
	return result;
}

//void __usercall DrawSA2BModel(SA2B_Model *model@<eax>)
static const void* const DrawSA2BModelPtr = (void*)0x4932C0;
static inline void DrawSA2BModel(SA2B_Model* model)
{
	__asm
	{
		mov eax, [model]
		call DrawSA2BModelPtr
	}
}

// void __usercall(CharObj2Base *_data2@<eax>, EntityData1 *_data1, int a2, int a4)
static const void* const SuperSonic_ChecksForDamagePtr = (void*)0x49B760;
static inline void SuperSonic_ChecksForDamage(CharObj2Base* _data2, EntityData1* _data1, int a2, int a4)
{
	__asm
	{
		push[a4]
		push[a2]
		push[_data1]
		mov eax, [_data2]
		call SuperSonic_ChecksForDamagePtr
		add esp, 12
	}
}

// void __usercall(CharObj2Base *a1@<edi>, EntityData1 *a2, SuperSonicCharObj2 *a3)
static const void* const Super_AfterimagePtr = (void*)0x49C000;
static inline void Super_Afterimage(CharObj2Base* a1, EntityData1* a2, SuperSonicCharObj2* a3)
{
	__asm
	{
		push[a3]
		push[a2]
		mov esi, [a1]
		call Super_AfterimagePtr
		add esp, 4
	}
}

static const void* const CameraApplyScreenViewPtr = (void*)0x4EB550;
static inline void CameraApplyScreenView(int num) // Apply the drawing view for camera "num" (the game supports 4 cameras)
{
	__asm
	{
		mov esi, [num]
		call CameraApplyScreenViewPtr
	}
}

static const void* const GetCurrentCameraSlotPtr = (void*)0x4EBAD6;
static inline int GetCurrentCameraSlot(int pnum) // Get the slot of the currently running camera
{
	int slot;
	__asm
	{
		mov eax, [pnum]
		call GetCurrentCameraSlotPtr
		mov slot, eax
	}
	return slot;
}

static const void* const GetPreviousCameraSlotPtr = (void*)0x4EBAE0;
static inline int GetPreviousCameraSlot(int pnum) // Get the slot of the previous running camera
{
	int slot;
	__asm
	{
		mov ecx, [pnum]
		call GetPreviousCameraSlotPtr
		mov slot, eax
	}
	return slot;
}

static const void* const GetCameraModePtr = (void*)0x4EBB20;
static inline int GetCameraMode(int pnum, int slot) // Get the mode (see CameraModes enum) of a camera slot
{
	int mode;
	__asm
	{
		mov ecx, [pnum]
		mov eax, [slot]
		call GetCameraModePtr
		mov mode, eax
	}
	return mode;
}

static const void* const SetCameraModePtr = (void*)0x4EBB40;
static inline CameraParam* SetCameraMode(int pnum, int slot, int mode) // Set the mode (see CameraModes enum) of a camera slot
{
	CameraParam* result;
	__asm
	{
		push[mode]
		push[slot]
		mov eax, [pnum]
		call SetCameraModePtr
		mov result, eax
		add esp, 8
	}
	return result;
}

static const void* const RegisterCameraModePtr = (void*)0x4EBBE0;
static inline CameraParam* RegisterCameraMode(int pnum, int mode) // Set mode of a free camera slot and set it as current
{
	CameraParam* result;
	__asm
	{
		mov eax, [pnum]
		mov edx, [mode]
		call RegisterCameraModePtr
		mov result, eax
	}
	return result;
}

static const void* const SetEventCameraFuncPtr = (void*)0x4EBC50;
static inline CameraParam* SetEventCameraFunc(int pnum, int slot, CameraFuncPtr func) // Set a custom camera function for camera slot
{
	CameraParam* result;
	__asm
	{
		push[func]
		mov esi, [slot]
		mov eax, [pnum]
		call SetEventCameraFuncPtr
		mov result, eax
		add esp, 4
	}
	return result;
}

static const void* const RegisterEventCameraFuncPtr = (void*)0x4EBCB0;
static inline CameraParam* RegisterEventCameraFunc(int pnum, CameraFuncPtr func) // Set a custom function camera into a free slot and set it as current
{
	CameraParam* result;
	__asm
	{
		mov edx, [func]
		mov eax, [pnum]
		call RegisterEventCameraFuncPtr
		mov result, eax
	}
	return result;
}

static const void* const SetAdjustModePtr = (void*)0x4EBCD0;
static inline CameraParam* SetAdjustMode(int pnum, int slot, int adjust) // Set the adjust (see CameraAdjusts enum) of a camera slot
{
	CameraParam* result;
	__asm
	{
		mov edi, [adjust]
		mov eax, [slot]
		mov ecx, [pnum]
		call SetAdjustModePtr
		mov result, eax
	}
	return result;
}

static const void* const ReleaseCameraPtr = (void*)0x4EBD30;
static inline void ReleaseCamera(int pnum, int slot) // Remove the current camera slot and restore the previous one
{
	__asm
	{
		mov eax, [slot]
		mov ecx, [pnum]
		call ReleaseCameraPtr
	}
}

static const void* const SetMotionCameraPtr = (void*)0x4EBEC0;
static inline CameraParam* SetMotionCamera(int pnum, CameraMotion* cam_mtn) // Set up a camera that follows a camera motion
{
	CameraParam* result;
	__asm
	{
		mov ebx, [cam_mtn]
		mov eax, [pnum]
		call SetMotionCameraPtr
		mov result, eax
	}
	return result;
}

static const void* const ReleaseMotionCameraPtr = (void*)0x4EC330;
static inline void ReleaseMotionCamera(int pnum) // Remove the current motion camera
{
	__asm
	{
		mov ebx, [pnum]
		call ReleaseMotionCameraPtr
	}
}

static const void* const CameraUpdateLocationPtr = (void*)0x4EC770;
static inline void CameraUpdateLocation(int num) // Backup camera location, then update it with CameraPos, CameraAng, CameraDir, CameraTgt and CameraSpd
{
	__asm
	{
		mov ecx, [num]
		call CameraUpdateLocationPtr
	}
}

static const void* const CameraGetStopFlagPtr = (void*)0x4ECA50;
static inline void CameraGetStopFlag(int num)
{
	__asm
	{
		mov eax, [num]
		call CameraGetStopFlagPtr
	}
}

// ObjectMaster *__usercall@<eax>(ObjectMaster *parent@<eax>, NJS_VECTOR *position@<ebx>, int a1, int a2)
static const void* const SpawnBombPtr = (void*)0x513FE0;
static inline ObjectMaster* SpawnBomb(ObjectMaster* parent, NJS_VECTOR* position, int a1, int a2)
{
	ObjectMaster* result;
	__asm
	{
		push[a2]
		push[a1]
		mov ebx, [position]
		mov eax, [parent]
		call SpawnBombPtr
		add esp, 8
		mov result, eax
	}
	return result;
}

// void __usercall(char *a1@<esi>)
static const void* const WriteChaoSaveChecksumPtr = (void*)0x52EEE0;
static inline void WriteChaoSaveChecksum(char* a1)
{
	__asm
	{
		mov esi, [a1]
		call WriteChaoSaveChecksumPtr
	}
}

// signed int __usercall@<eax>(unsigned __int16 a1@<cx>, ObjectMaster *obj@<ebx>, __int16 a3, ChaoData *data)
static const void* const AddToGlobalChaoThingMaybePtr = (void*)0x530750;
static inline signed int AddToGlobalChaoThingMaybe(unsigned __int16 a1, ObjectMaster* obj, __int16 a3, ChaoData* data)
{
	signed int result;
	__asm
	{
		push[data]
		movzx eax, [a3]
		push eax
		mov ebx, [obj]
		mov cx, [a1]
		call AddToGlobalChaoThingMaybePtr
		add esp, 8
		mov result, eax
	}
	return result;
}

// void __usercall(char *a1@<eax>, char *a2)
static const void* const AddChaoSaveSignaturePtr = (void*)0x5326C0;
static inline void AddChaoSaveSignature(char* a1, char* a2)
{
	__asm
	{
		push[a2]
		mov eax, [a1]
		call AddChaoSaveSignaturePtr
		add esp, 4
	}
}

// int __usercall@<eax>(ChaoDNA *a1@<esi>)
static const void* const InitChaoDNAPtr = (void*)0x5506B0;
static inline int InitChaoDNA(ChaoDNA* a1)
{
	int result;
	__asm
	{
		mov esi, [a1]
		call InitChaoDNAPtr
		mov result, eax
	}
	return result;
}

// void __usercall(ObjectMaster *a1@<eax>)
static const void* const LoadChaoMotionTablePtr = (void*)0x55C370;
static inline void LoadChaoMotionTable(ObjectMaster* a1)
{
	__asm
	{
		mov eax, [a1]
		call LoadChaoMotionTablePtr
	}
}

// int __usercall@<eax>(NJS_VECTOR *position@<ebx>, int a2)
static const void* const ALO_ShabonExecutor_LoadPtr = (void*)0x55DA10;
static inline int ALO_ShabonExecutor_Load(NJS_VECTOR* position, int a2)
{
	int result;
	__asm
	{
		push[a2]
		mov ebx, [position]
		call ALO_ShabonExecutor_LoadPtr
		add esp, 4
		mov result, eax
	}
	return result;
}

// unsigned int __usercall@<eax>(int a1@<eax>)
static const void* const GetChunkTextureIndexPtr = (void*)0x56D1F0;
static inline unsigned int GetChunkTextureIndex(int a1)
{
	unsigned int result;
	__asm
	{
		mov eax, [a1]
		call GetChunkTextureIndexPtr
		mov result, eax
	}
	return result;
}

// EntityData1 *__usercall@<eax>(NJS_VECTOR *position@<ebx>, int a2)
static const void* const ALO_OdekakeMachine_LoadPtr = (void*)0x57E4F0;
static inline EntityData1* ALO_OdekakeMachine_Load(NJS_VECTOR* position, int a2)
{
	EntityData1* result;
	__asm
	{
		push[a2]
		mov ebx, [position]
		call ALO_OdekakeMachine_LoadPtr
		add esp, 4
		mov result, eax
	}
	return result;
}

// ObjectMaster *__usercall@<eax>(NJS_VECTOR *position@<ebx>)
static const void* const ALO_LobbyGateKinderExecutor_LoadPtr = (void*)0x57F060;
static inline ObjectMaster* ALO_LobbyGateKinderExecutor_Load(NJS_VECTOR* position)
{
	ObjectMaster* result;
	__asm
	{
		mov ebx, [position]
		call ALO_LobbyGateKinderExecutor_LoadPtr
		mov result, eax
	}
	return result;
}

// ObjectMaster *__usercall@<eax>(NJS_VECTOR *position@<ebx>)
static const void* const ALO_LobbyGateNeutExecutor_LoadPtr = (void*)0x57F8C0;
static inline ObjectMaster* ALO_LobbyGateNeutExecutor_Load(NJS_VECTOR* position)
{
	ObjectMaster* result;
	__asm
	{
		mov ebx, [position]
		call ALO_LobbyGateNeutExecutor_LoadPtr
		mov result, eax
	}
	return result;
}

// ObjectMaster *__usercall@<eax>(NJS_VECTOR *position@<ebx>)
static const void* const ALO_LobbyGateHeroExecutor_LoadPtr = (void*)0x57FCE0;
static inline ObjectMaster* ALO_LobbyGateHeroExecutor_Load(NJS_VECTOR* position)
{
	ObjectMaster* result;
	__asm
	{
		mov ebx, [position]
		call ALO_LobbyGateHeroExecutor_LoadPtr
		mov result, eax
	}
	return result;
}

// ObjectMaster *__usercall@<eax>(NJS_VECTOR *position@<ebx>)
static const void* const ALO_LobbyGateDarkExecutor_LoadPtr = (void*)0x580140;
static inline ObjectMaster* ALO_LobbyGateDarkExecutor_Load(NJS_VECTOR* position)
{
	ObjectMaster* result;
	__asm
	{
		mov ebx, [position]
		call ALO_LobbyGateDarkExecutor_LoadPtr
		mov result, eax
	}
	return result;
}

//void __usercall(const char *str@<ecx>, const NJS_VECTOR* pos@<eax>, float scale, const NJS_COLOR* color)
static const void* const CreateAndDrawMessage_ptr = (void*)0x667410;
static inline void CreateAndDrawMessage(const char* text, const NJS_VECTOR* pos, float scale, const NJS_COLOR* color)
{
	__asm
	{
		push[color]
		push[scale]
		mov eax, [pos]
		mov ecx, [text]
		call CreateAndDrawMessage_ptr
		add esp, 0x8
	}
}

// void __usercall(NJS_SPRITE *_sp@<ebx>, Int n@<eax>, Float pri, Uint32 attr)
static const void* const njDrawSprite2D_0Ptr = (void*)0x66EF40;
static inline void njDrawSprite2D_0(NJS_SPRITE* _sp, Int n, Float pri, Uint32 attr)
{
	__asm
	{
		push[attr]
		push[pri]
		mov eax, [n]
		mov ebx, [_sp]
		call njDrawSprite2D_0Ptr
		add esp, 8
	}
}

// void __usercall(ef_message *message@<eax>, const NJS_COLOR *color@<edx>, float x
static const void* const InitMessage_ptr = (void*)0x6B5A60;
static inline void InitMessage(ef_message* message, const NJS_COLOR* color, float x_pos, float y_pos, float x_scale, float y_scale)
{
	__asm
	{
		push[y_scale]
		push[x_scale]
		push[y_pos]
		push[x_pos]
		mov edx, [color]
		mov eax, [message]
		call InitMessage_ptr
		add esp, 0x10
	}
}

// void __usercall(NJS_VECTOR *a1@<ebx>, float a2)
static const void* const ExpManExec_LoadBPtr = (void*)0x6C8BA0;
static inline void ExpManExec_LoadB(NJS_VECTOR* a1, float a2)
{
	__asm
	{
		push[a2]
		mov ebx, [a1]
		call ExpManExec_LoadBPtr
		add esp, 4
	}
}

// Sint32 __usercall@<eax>(const char *path@<eax>, FogData *data@<ebx>)
static const void* const LoadFogDataPtr = (void*)0x6DF840;
static inline Sint32 LoadFogData(const char* path, FogData* data)
{
	Sint32 result;
	__asm
	{
		mov ebx, [data]
		mov eax, [path]
		call LoadFogDataPtr
		mov result, eax
	}
	return result;
}

// void __usercall(const char *path@<eax>, FogData *data@<ecx>)
static const void* const LoadFogData_FogtaskPtr = (void*)0x6DFF00;
static inline void LoadFogData_Fogtask(const char* path, FogData* data)
{
	__asm
	{
		mov ecx, [data]
		mov eax, [path]
		call LoadFogData_FogtaskPtr
	}
}

// void __usercall(NJS_VECTOR *a1@<ebx>, float a2, float a3)
static const void* const LoadChaoKeyPtr = (void*)0x6E9D10;
static inline void LoadChaoKey(NJS_VECTOR* a1, float a2, float a3)
{
	__asm
	{
		push[a3]
		push[a2]
		mov ebx, [a1]
		call LoadChaoKeyPtr
		add esp, 8
	}
}

// void __usercall(EntityData1 *a1@<esi>, CharObj2Base *a2, SonicCharObj2 *a3)
static const void* const Sonic_AfterimagePtr = (void*)0x71E460;
static inline void Sonic_Afterimage(EntityData1* a1, CharObj2Base* a2, SonicCharObj2* a3)
{
	__asm
	{
		push[a3]
		push[a2]
		mov esi, [a1]
		call Sonic_AfterimagePtr
		add esp, 4
	}
}

// signed int __usercall@<eax>(EntityData1 *a1@<eax>, EntityData2 *a2@<edx>, CharObj2Base *a3@<ecx>, SonicCharObj2 *a4)
static const void* const Sonic_CheckActionWindowPtr = (void*)0x7230E0;
static inline signed int Sonic_CheckActionWindow(EntityData1* a1, EntityData2* a2, CharObj2Base* a3, SonicCharObj2* a4)
{
	signed int result;
	__asm
	{
		push[a4]
		mov ecx, [a3]
		mov edx, [a2]
		mov eax, [a1]
		call Sonic_CheckActionWindowPtr
		add esp, 4
		mov result, eax
	}
	return result;
}

// char __usercall@<al>(EntityData1 *a1@<edx>, CharObj2Base *a2@<ecx>, SonicCharObj2 *a3@<esi>)
static const void* const Sonic_StartSpindashPtr = (void*)0x7234C0;
static inline char Sonic_StartSpindash(EntityData1* a1, CharObj2Base* a2, SonicCharObj2* a3)
{
	char result;
	__asm
	{
		mov esi, [a3]
		mov ecx, [a2]
		mov edx, [a1]
		call Sonic_StartSpindashPtr
		mov result, al
	}
	return result;
}

// void __usercall(EntityData1 *a1@<eax>, SonicCharObj2 *a2@<ecx>, CharObj2Base *a3@<edi>)
static const void* const Sonic_DoObstacleSomersaultPtr = (void*)0x723560;
static inline void Sonic_DoObstacleSomersault(EntityData1* a1, SonicCharObj2* a2, CharObj2Base* a3)
{
	__asm
	{
		mov edi, [a3]
		mov ecx, [a2]
		mov eax, [a1]
		call Sonic_DoObstacleSomersaultPtr
	}
}

// signed int __usercall@<eax>(SonicCharObj2 *a1@<eax>, EntityData1 *a2, CharObj2Base *a3)
static const void* const Sonic_SomersaultPtr = (void*)0x723880;
static inline signed int Sonic_Somersault(SonicCharObj2* a1, EntityData1* a2, CharObj2Base* a3)
{
	signed int result;
	__asm
	{
		push[a3]
		push[a2]
		mov eax, [a1]
		call Sonic_SomersaultPtr
		add esp, 8
		mov result, eax
	}
	return result;
}

// void __usercall(SonicCharObj2 *sonicdata@<eax>, CharObj2Base *basedata@<edx>, EntityData1 *entity@<ecx>)
static const void* const Sonic_PerformLightDashPtr = (void*)0x724010;
static inline void Sonic_PerformLightDash(SonicCharObj2* sonicdata, CharObj2Base* basedata, EntityData1* entity)
{
	__asm
	{
		mov ecx, [entity]
		mov edx, [basedata]
		mov eax, [sonicdata]
		call Sonic_PerformLightDashPtr
	}
}

// signed int __usercall@<eax>(CharObj2Base *data2@<ecx>, EntityData1 *a2)
static const void* const Sonic_CheckSpecialPtr = (void*)0x724250;
static inline signed int Sonic_CheckSpecial(CharObj2Base* data2, EntityData1* a2)
{
	signed int result;
	__asm
	{
		push[a2]
		mov ecx, [data2]
		call Sonic_CheckSpecialPtr
		add esp, 4
		mov result, eax
	}
	return result;
}

// signed int __usercall@<eax>(CharObj2Base *a1@<eax>, EntityData1 *a2@<ecx>)
static const void* const Sonic_PerformBouncePtr = (void*)0x7252D0;
static inline signed int Sonic_PerformBounce(CharObj2Base* a1, EntityData1* a2)
{
	signed int result;
	__asm
	{
		mov ecx, [a2]
		mov eax, [a1]
		call Sonic_PerformBouncePtr
		mov result, eax
	}
	return result;
}

// void __usercall(EntityData1 *a1@<esi>, CharObj2Base *a2, KnucklesCharObj2 *a3)
static const void* const Knuckles_DiveAfterimagePtr = (void*)0x72DA70;
static inline void Knuckles_DiveAfterimage(EntityData1* a1, CharObj2Base* a2, KnucklesCharObj2* a3)
{
	__asm
	{
		push[a3]
		push[a2]
		mov esi, [a1]
		call Knuckles_DiveAfterimagePtr
		add esp, 4
	}
}

// void __usercall(CharObj2Base *a1@<edi>, EntityData1 *a2, KnucklesCharObj2 *a3)
static const void* const Knuckles_UppercutAfterimagePtr = (void*)0x72DB90;
static inline void Knuckles_UppercutAfterimage(CharObj2Base* a1, EntityData1* a2, KnucklesCharObj2* a3)
{
	__asm
	{
		push[a3]
		push[a2]
		mov edi, [a1]
		call Knuckles_UppercutAfterimagePtr
		add esp, 4
	}
}

// signed int __usercall@<eax>(KnucklesCharObj2 *a1@<eax>, int a2@<edx>, EntityData1 *a3, KnucklesCharObj2 *a4)
static const void* const Knuckles_CheckActionWindowPtr = (void*)0x7338F0;
static inline signed int Knuckles_CheckActionWindow(KnucklesCharObj2* a1, int a2, EntityData1* a3, KnucklesCharObj2* a4)
{
	signed int result;
	__asm
	{
		push[a4]
		push[a3]
		mov edx, [a2]
		mov eax, [a1]
		call Knuckles_CheckActionWindowPtr
		add esp, 8
		mov result, eax
	}
	return result;
}

// signed int __usercall@<eax>(CharObj2Base *data2@<ecx>, EntityData1 *a2)
static const void* const Knuckles_CheckSpecialPtr = (void*)0x736200;
static inline signed int Knuckles_CheckSpecial(CharObj2Base* data2, EntityData1* a2)
{
	signed int result;
	__asm
	{
		push[a2]
		mov ecx, [data2]
		call Knuckles_CheckSpecialPtr
		add esp, 4
		mov result, eax
	}
	return result;
}

// void __usercall(EntityData1 *a1@<eax>, CharObj2Base *a2@<edi>, KnucklesCharObj2 *a3)
static const void* const GiveDiggableItemPtr = (void*)0x737820;
static inline void GiveDiggableItem(EntityData1* a1, CharObj2Base* a2, KnucklesCharObj2* a3)
{
	__asm
	{
		push[a3]
		mov edi, [a2]
		mov eax, [a1]
		call GiveDiggableItemPtr
		add esp, 4
	}
}

// bool __usercall@<eax>(EntityData1 *a1@<eax>, SonicCharObj2 *a2@<ecx>)
static const void* const Knuckles_LevelBoundsPtr = (void*)0x737B50;
static inline int Knuckles_LevelBounds(EntityData1* a1, SonicCharObj2* a2)
{
	int result;
	__asm
	{
		mov ecx, [a2]
		mov eax, [a1]
		call Knuckles_LevelBoundsPtr
		mov result, eax
	}
	return result;
}

//int __usercall Knux_CheckNextActions@<eax>(KnucklesCharObj2* a1@<edx>, EntityData2* a2@<ecx>, EntityData1* a3@<ebx>, CharObj2Base* a4)
static const void* const KnuxNactPtr = (void*)0x732E00;
static inline int Knux_CheckNAct(KnucklesCharObj2* a1, EntityData2* a2, EntityData1* a3, CharObj2Base* a4) {

	int result;

	__asm
	{
		push[a4]
		mov ebx, a3
		mov ecx, a2
		mov edx, a1
		call KnuxNactPtr
		add esp, 4
		mov result, eax
	}

	return result;
}

// void __usercall(EmeManObj2 *a1@<esi>)
static const void* const EmeraldLocations_2PGroup2Ptr = (void*)0x7387D0;
static inline void EmeraldLocations_2PGroup2(EmeManObj2* a1)
{
	__asm
	{
		mov esi, [a1]
		call EmeraldLocations_2PGroup2Ptr
	}
}

// void __usercall(EmeManObj2 *a1@<esi>)
static const void* const EmeraldLocations_2PGroup1Ptr = (void*)0x739340;
static inline void EmeraldLocations_2PGroup1(EmeManObj2* a1)
{
	__asm
	{
		mov esi, [a1]
		call EmeraldLocations_2PGroup1Ptr
	}
}

// void __usercall(int a1@<eax>)
static const void* const LoadEggmanPtr = (void*)0x73C220;
static inline void LoadEggman(int a1)
{
	__asm
	{
		mov eax, [a1]
		call LoadEggmanPtr
	}
}

// void __usercall(CharObj2Base *a1@<eax>)
static const void* const InitMechHPPtr = (void*)0x7414D0;
static inline void InitMechHP(CharObj2Base* a1)
{
	__asm
	{
		mov eax, [a1]
		call InitMechHPPtr
	}
}

// void __usercall(CharObj2Base *a1@<eax>, EntityData1 *a2@<edi>)
static const void* const FreeMovement_MechEggmanPtr = (void*)0x749020;
static inline void FreeMovement_MechEggman(CharObj2Base* a1, EntityData1* a2)
{
	__asm
	{
		mov edi, [a2]
		mov eax, [a1]
		call FreeMovement_MechEggmanPtr
	}
}

// signed int __usercall@<eax>(int a1@<eax>, int a2@<edx>, CharObj2Base *a3@<ecx>, int a4)
static const void* const MechEggman_CheckActionWindowPtr = (void*)0x749740;
static inline signed int MechEggman_CheckActionWindow(int a1, int a2, CharObj2Base* a3, int a4)
{
	signed int result;
	__asm
	{
		push[a4]
		mov ecx, [a3]
		mov edx, [a2]
		mov eax, [a1]
		call MechEggman_CheckActionWindowPtr
		add esp, 4
		mov result, eax
	}
	return result;
}

// signed int __usercall@<eax>(CharObj2Base *data2@<ecx>, EntityData1 *a2)
static const void* const MechEggman_CheckSpecialPtr = (void*)0x749910;
static inline signed int MechEggman_CheckSpecial(CharObj2Base* data2, EntityData1* a2)
{
	signed int result;
	__asm
	{
		push[a2]
		mov ecx, [data2]
		call MechEggman_CheckSpecialPtr
		add esp, 4
		mov result, eax
	}
	return result;
}

// void __usercall(int a1@<eax>)
static const void* const LoadTailsPtr = (void*)0x74CF00;
static inline void LoadTails(int a1)
{
	__asm
	{
		mov eax, [a1]
		call LoadTailsPtr
	}
}

// void __usercall(CharObj2Base *a1@<eax>, EntityData1 *a2@<edi>)
static const void* const FreeMovement_TailsPtr = (void*)0x7519B0;
static inline void FreeMovement_Tails(CharObj2Base* a1, EntityData1* a2)
{
	__asm
	{
		mov edi, [a2]
		mov eax, [a1]
		call FreeMovement_TailsPtr
	}
}

// signed int __usercall@<eax>(int a1@<eax>, int a2@<edx>, CharObj2Base *a3@<ecx>, int a4)
static const void* const Tails_CheckActionWindowPtr = (void*)0x752400;
static inline signed int Tails_CheckActionWindow(int a1, int a2, CharObj2Base* a3, int a4)
{
	signed int result;
	__asm
	{
		push[a4]
		mov ecx, [a3]
		mov edx, [a2]
		mov eax, [a1]
		call Tails_CheckActionWindowPtr
		add esp, 4
		mov result, eax
	}
	return result;
}

// void __usercall(NJS_VECTOR *a1@<ebx>, int a2, NJS_VECTOR *a3, char a4)
static const void* const PowderExecutePtr = (void*)0x754A20;
static inline void PowderExecute(NJS_VECTOR* a1, int a2, NJS_VECTOR* a3, char a4)
{
	__asm
	{
		movzx eax, [a4]
		push eax
		push[a3]
		push[a2]
		mov ebx, [a1]
		call PowderExecutePtr
		add esp, 12
	}
}

// void __usercall(ObjectMaster *parent@<eax>, BossTitleData *data)
static const void* const LoadBossTitleExecPtr = (void*)0x762FA0;
static inline void LoadBossTitleExec(ObjectMaster* parent, BossTitleData* data)
{
	__asm
	{
		push[data]
		mov eax, [parent]
		call LoadBossTitleExecPtr
		add esp, 4
	}
}

// void __usercall(NJS_SPRITE *sp, Int n@<eax>, Float pri, char attr)
static const void* const njDrawSprite2DPtr = (void*)0x77D0B0;
static inline void njDrawSprite2D(NJS_SPRITE* _sp, Int n, Float pri, char attr)
{
	__asm
	{
		movzx eax, [attr]
		push eax
		push[pri]
		mov eax, [n]
		push[_sp]
		call njDrawSprite2DPtr
		add esp, 12
	}
}

// void *__usercall@<eax>(int size, int count@<edx>, char *file@<ecx>, int line@<eax>)
static const void* const AllocateArrayPtr = (void*)0x77DF40;
static inline void* AllocateArray(int _size, int count, char* file, int line)
{
	void* result;
	__asm
	{
		mov eax, [line]
		mov ecx, [file]
		mov edx, [count]
		push[_size]
		call AllocateArrayPtr
		add esp, 4
		mov result, eax
	}
	return result;
}

// PDS_PERIPHERAL *__usercall@<eax>(signed int a1@<eax>, int a2@<ecx>)
static const void* const pdGetPeripheralPtr = (void*)0x77E8A0;
static inline PDS_PERIPHERAL* pdGetPeripheral(signed int a1, int a2)
{
	PDS_PERIPHERAL* result;
	__asm
	{
		mov ecx, [a2]
		mov eax, [a1]
		call pdGetPeripheralPtr
		mov result, eax
	}
	return result;
}

// void __usercall(int numPoints@<ecx>, int readAlpha_q@<eax>, const PolygonPoint *pointArray)
static const void* const DrawPolygon_ptr = (void*)0x77F7F0;
static inline void DrawPolygon(int numPoints, int readAlpha_q, const PolygonPoint* pointArray)
{
	__asm
	{
		push[pointArray]
		mov eax, [readAlpha_q]
		mov ecx, [numPoints]
		call DrawPolygon_ptr
		add esp, 0x4
	}
}

//signed int __usercall njPopMatrix@<eax>(int count@<eax>)
static const void* const njPopMatrixPtr = (void*)0x77FD60;
static inline signed int njPopMatrix(int count)
{
	signed int result;
	__asm
	{
		mov eax, [count]
		call njPopMatrixPtr
		mov result, eax
	}
	return result;
}

//void __usercall njTranslate(NJS_MATRIX_PTR m@<eax>, float x, float y, float z)
static const void* const njTranslatePtr = (void*)0x77FD90;
static inline void njTranslate(NJS_MATRIX_PTR m, float x, float y, float z)
{
	__asm
	{
		push[z]
		push[y]
		push[x]
		mov eax, [m]
		call njTranslatePtr
		add esp, 12
	}
}

//void __usercall njSetMatrix(NJS_MATRIX_PTR md@<eax>, NJS_MATRIX_CONST_PTR ms@<ecx>)
static const void* const njSetMatrixPtr = (void*)0x77FDF0;
static inline void njSetMatrix(NJS_MATRIX_PTR md, NJS_MATRIX_PTR ms)
{
	__asm
	{
		mov ecx, [ms]
		mov eax, [md]
		call njSetMatrixPtr
	}
}

//signed int __usercall njPushMatrix@<eax>(NJS_MATRIX_PTR m@<ecx>)
static const void* const njPushMatrixPtr = (void*)0x77FE10;
static inline signed int njPushMatrix(NJS_MATRIX_PTR m)
{
	signed int result;
	__asm
	{
		mov ecx, [m]
		call njPushMatrixPtr
		mov result, eax
	}
	return result;
}

//void __usercall njScale(NJS_MATRIX_PTR m@<eax>, float x, float y, float z)
static const void* const njScalePtr = (void*)0x7802B0;
static inline void njScale(NJS_MATRIX_PTR m, float x, float y, float z)
{
	__asm
	{
		push[z]
		push[y]
		push[x]
		mov eax, [m]
		call njScalePtr
		add esp, 12
	}
}

//void __usercall njTranslateV(NJS_MATRIX_PTR m@<ecx>, NJS_VECTOR *v@<eax>)
static const void* const njTranslateVPtr = (void*)0x7806A0;
static inline void njTranslateV(NJS_MATRIX_PTR m, NJS_VECTOR* v)
{
	__asm
	{
		mov eax, [v]
		mov ecx, [m]
		call njTranslateVPtr
	}
}

// void __usercall njSetMotion(NJS_MOTION *motion@<ecx>, float frame);
static const void* const njSetMotionPtr = (void*)0x7819A0;
static inline void njSetMotion(NJS_MOTION* motion, float frame)
{
	__asm
	{
		push[frame]
		mov ecx, [motion]
		call njSetMotionPtr
		add esp, 4
	}
}

// void __usercall(ObjectMaster* a1@<eax>, int(__cdecl* bhav)(ObjectMaster*), int timer)
static const void* const Chao_BehaviourPtr = (void*)0x0053D890;
static inline void Chao_Behaviour(ObjectMaster* a1, int(__cdecl* bhav)(ObjectMaster*), int timer)
{
	__asm
	{
		push timer
		push bhav
		mov eax, a1
		call Chao_BehaviourPtr
		add esp, 8
	}
}

// void __usercall(ObjectMaster* a1@<eax>, int(__cdecl* bhav)(ObjectMaster*)@<edx>)
static const void* const Chao_BehaviourQueuePtr = (void*)0x0053D970;
static inline void Chao_BehaviourQueue(ObjectMaster* a1, int(__cdecl* bhav)(ObjectMaster*))
{
	__asm
	{
		mov edx, bhav
		mov eax, a1
		call Chao_BehaviourQueuePtr
	}
}

// void __usercall(ObjectMaster* a1@<ecx>, int index@<edx>, int timer@<eax>)
static const void* const Chao_SetEyePtr = (void*)0x0053A4B0;
static inline void Chao_SetEye(ObjectMaster* a1, int index, int timer)
{
	__asm
	{
		mov eax, timer
		mov edx, index
		mov ecx, a1
		call Chao_SetEyePtr
	}
}

// void __usercall(ObjectMaster* a1@<ecx>, int index, int timer@<edx>)
static const void* const Chao_SetMouthPtr = (void*)0x0053A5A0;
static inline void Chao_SetMouth(ObjectMaster* a1, int index, int timer)
{
	__asm
	{
		mov edx, timer
		mov ecx, a1
		push index
		call Chao_SetMouthPtr
		add esp, 4
	}
}

// void __usercall(MotionTableData* a1@<eax>, int a2@<edx>)
static const void* const Chao_AnimationPtr = (void*)0x00793C40;
static inline void Chao_Animation(MotionTableData* a1, int a2)
{
	__asm
	{
		mov eax, a1
		mov edx, a2
		call Chao_AnimationPtr
	}
}

// void __usercall(MotionTableData* a1@<eax>, int a2@<edx>, unsigned __int16 a3)
static const void* const Chao_PlayAnimationSpeedPtr = (void*)0x00793D30;
static inline void Chao_PlayAnimationSpeed(MotionTableData* a1, int a2, unsigned __int16 a3)
{
	__asm
	{
		push a3
		mov edx, a2
		mov eax, a1
		call Chao_PlayAnimationSpeedPtr
		add esp, 4
	}
}

static const void* const CameraApplyViewPtr = (void*)0x77E0C0;
static inline void CameraApplyView(CameraViewInfo* view) // Apply the drawing view using information from CameraViewInfo
{
	__asm
	{
		mov ebx, [view]
		call CameraApplyViewPtr
	}
}

// int __usercall@<eax>(int buttons@<edx>)
static const void* const XInputToDreamcastButtonsPtr = (void*)0x77E910;
static inline int XInputToDreamcastButtons(int buttons)
{
	int result;
	__asm
	{
		mov edx, [buttons]
		call XInputToDreamcastButtonsPtr
		mov result, eax
	}
	return result;
}

// float __usercall@<st0>(NJS_VECTOR *a1@<esi>)
static const void* const njUnitVectorPtr = (void*)0x77F3A0;
static inline float njUnitVector(NJS_VECTOR* a1)
{
	float result;
	__asm
	{
		mov esi, [a1]
		call njUnitVectorPtr
		fstp result
	}
	return result;
}

// double __usercall@<st0>(NJS_VECTOR *a1@<eax>, NJS_VECTOR *a2@<ecx>)
static const void* const CheckDistancePtr = (void*)0x77FBD0;
static inline double CheckDistance(NJS_VECTOR* a1, NJS_VECTOR* a2)
{
	double result;
	__asm
	{
		mov ecx, [a2]
		mov eax, [a1]
		call CheckDistancePtr
		fstp result
	}
	return result;
}

// float __usercall@<st0>(const NJS_VECTOR *result@<eax>)
static const void* const njScalorPtr = (void*)0x77FC30;
static inline float njScalor(const NJS_VECTOR* src)
{
	float result;
	__asm
	{
		mov eax, [src]
		call njScalorPtr
		fstp result
	}
	return result;
}

//void __usercall PresetPosition(EntityData1* a1@<eax>, EntityData2* a2@<ebx>, CharObj2Base* a3)
static const void* const PResetPosPtr = (void*)0x469050;
static inline void PResetPosition(EntityData1* a1, EntityData2* a2, CharObj2Base* a3)
{
	__asm
	{
		push[a3] // a3
		mov ebx, a2 // a2
		mov eax, a1 // a1
		call PResetPosPtr
		add esp, 4 // a2
	}
}

//void __usercall PSetPosition(EntityData1* data@<eax>, EntityData2* data2, CharObj2Base* co2)
static const void* const PSetPositionptr = (void*)0x4616E0;
static inline int PSetPosition(EntityData1* a1, EntityData2* a2, CharObj2Base* a3)
{
	int result;
	__asm
	{
		push[a3]
		push[a2]
		mov eax, [a1]
		call PSetPositionptr
		add esp, 8
		mov result, eax
	}
	return result;
}

//void __usercall PGetSpeed(EntityData1* a1@<eax>, CharObj2Base* a2@<ebx>, EntityData2* a3)
static const void* const PGetSpeedPtr = (void*)0x460860;
static inline void PGetSpeed(EntityData1* a1, CharObj2Base* co2, EntityData2* data2)
{
	__asm
	{
		push[data2]
		mov ebx, co2
		mov eax, a1
		call PGetSpeedPtr
		add esp, 4
	}
}

//void __usercall PlayerGetAccelerationAir(EntityData1* a1@<ecx>, CharObj2Base* eax0@<eax>, EntityData2* a4)
static const void* const PGetAccelAirPtr = (void*)0x45D770;
static inline void PGetAccelerationAir(EntityData1* a1, CharObj2Base* co2, EntityData2* data2)
{
	__asm
	{
		push[data2]
		mov eax, [co2]
		mov ecx, a1
		call PGetAccelAirPtr
		add esp, 4
	}
}

//void __usercall Delete_Jiggle(JiggleInfo* Jiggle@<esi>)
static const void* const jiggle_ptr = (void*)0x447910;
static inline void Delete_Jiggle(JiggleInfo* jiggle)
{
	__asm
	{
		mov esi, jiggle
		call jiggle_ptr
	}
}

//void __usercall DrawMotionAndObject(NJS_MOTION* mtn@<ecx>, NJS_OBJECT* obj, float frame)
static const void* const njDrawObjMotionPtr_ = (void*)0x780870;
static inline void DrawMotionAndObject(NJS_MOTION* mtn, NJS_OBJECT* obj, float frame)
{
	__asm
	{
		push[frame]
		push[obj]
		mov ecx, mtn
		call njDrawObjMotionPtr_
		add esp, 8
	}
}

//void __usercall DrawChunkModel(NJS_CNK_MODEL* a1@<eax>)
static const void* const DrawChunkModelPtr = (void*)0x42E6C0;
static inline void DrawChunkModel(NJS_CNK_MODEL* a1)
{
	__asm
	{
		mov eax, [a1]
		call DrawChunkModelPtr
	}
}

//void __usercall PlayAnimationThing(CharAnimInfo* a1@<esi>)
static const void* const PlayAnimPtr = (void*)0x4692A0;
static inline void PlayAnimationThing(CharAnimInfo* a1)
{
	__asm
	{
		mov esi, [a1]
		call PlayAnimPtr
	}
}

//void __usercall UnloadAnimation(AnimationIndex* a1@<esi>)
static const void* const UnloadAnimPtr = (void*)0x459890;
static inline void UnloadAnimation(AnimationIndex* a1)
{
	__asm
	{
		mov esi, [a1]
		call UnloadAnimPtr
	}
}

//void __usercall PResetAngle(EntityData1* data1@<eax>, CharObj2Base* data2@<ebx>)
static const void* const PResetAnglePtr = (void*)0x460260;
static inline void PResetAngle(EntityData1* a1, CharObj2Base* co2)
{
	__asm
	{
		mov ebx, [co2]
		mov eax, [a1] // a1
		call PResetAnglePtr
	}
}

//void __usercall PGetFriction(EntityData1* a1@<ecx>, EntityData2* eax0@<eax>, CharObj2Base* a3)
static const void* const PGetFrictionPtr = (void*)0x45F4D0;
static inline void PGetFriction(EntityData1* data, EntityData2* data2, CharObj2Base* co2)
{
	__asm
	{
		push[co2]
		mov eax, [data2]
		mov ecx, [data]
		call PGetFrictionPtr
		add esp, 4

	}
}

//int __usercall Sonic_CheckNextAction@<eax>(SonicCharObj2* a1@<eax>, EntityData1* a2, EntityData2* a3, CharObj2Base* a4)
static const void* const Sonic_CheckNextActionPtr = (void*)0x7220E0;
static inline signed int Sonic_CheckNextAction(SonicCharObj2* a1, EntityData1* a2, EntityData2* a3, CharObj2Base* a4)
{
	signed int result;
	__asm
	{
		push[a4]
		push[a3]
		push[a2]
		mov eax, [a1]
		call Sonic_CheckNextActionPtr
		add esp, 12
		mov result, eax
	}
	return result;
}

//void __usercall njdraw3DSprite(int a1@<eax>, NJS_SPRITE* a2, char a3)
static const void* const njdrawsprite3Dptr = (void*)0x77D690;
static inline void njDrawSprite3D(int a1, NJS_SPRITE* a2, char a3)
{
	__asm
	{
		movzx eax, [a3]
		push eax
		push[a2]
		mov eax, [a1]
		call njdrawsprite3Dptr
		add esp, 8
	}
}

//int __usercall VibeThing@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
static const void* const VibeThingPtr = (void*)0x438E70;
static inline void VibeThing(int a1, signed int a2, int a3, signed int a4)
{
	__asm
	{
		push[a4]
		mov ecx, a3
		mov edx, a2
		mov eax, a1
		call VibeThingPtr
		add esp, 4
	}
}

//void __usercall TailsEggman_SpecialAttack(CharObj2Base *a1@<ebx>, EntityData1 *data, EntityData2 *data2, MechEggmanCharObj2 *a4)
static const void* const TailsEggman_LaserAttack_ptr = (void*)0x749FE0;
static inline void TailsEggman_LaserAttack(CharObj2Base* a1, EntityData1* data, EntityData2* data2, MechEggmanCharObj2* a4)
{
	__asm
	{
		push[a4]
		push[data2]
		push[data]
		mov ebx, a1
		call TailsEggman_LaserAttack_ptr
		add esp, 12
	}
}

//void __usercall PAdjustAngleY(EntityData1 *data@<eax>, CharObj2Base *co2@<ebx>, int a3)
static const void* const PadAdjustAngleYPtr = (void*)0x4603D0;
static inline void PAdjustAngleY(EntityData1* data, CharObj2Base* co2, int a3)
{
	__asm
	{
		push[a3]
		mov ebx, [co2]
		mov eax, [data]
		call PadAdjustAngleYPtr
		add esp, 4
	}
}

//void __usercall PAdjustAngleY(EntityData1 *data@<eax>, CharObj2Base *co2@<ebx>, int a3)
static const void* const PAccelFlyPtr = (void*)0x752DF0;
static inline void PGetAccelFly(EntityData1* data1, EntityData2* data2, CharObj2Base* co2, TailsCharObj2* co2Tails)
{
	__asm
	{
		push[co2Tails]
		push[co2]
		push[data2]
		push[data1]
		call PAccelFlyPtr
		add esp, 16
	}
}

//void __usercall Sonic_InitLightDash(EntityData1* data@<ecx>, CharObj2Base* co2@<eax>, motionwk2* data2, SonicCharObj2* a5)
static const void* const lightdashptr = (void*)0x7215D0;
static inline void Sonic_InitLightDash(EntityData1* data, CharObj2Base* co2, EntityData2* data2, SonicCharObj2* a5)
{
	__asm
	{
		push[a5]
		push[data2]
		mov eax, [co2]
		mov ecx, [data]
		call lightdashptr
		add esp, 8
	}
}

//int __usercall Tails_JumpStart@<eax>(CharObj2Base* co2@<eax>, EntityData1* data@<ecx>)
static const void* const TailsJumpPtr = (void*)0x751B80;
static inline int TailsJump(CharObj2Base* a1, EntityData1* a2)
{
	int result;
	__asm
	{
		mov ecx, [a2]
		mov eax, [a1]
		call TailsJumpPtr
		mov result, eax
	}

	return result;
}

//bool __usercall Player_CheckBreak@<eax>(int a1@<ecx>, EntityData1* a2@<edi>, CharObj2Base* a3@<esi>)
static const void* const playerBreakPtr = (void*)0x45ABE0;
static inline bool PlayerCheckBreak(int a1, EntityData1* a2, CharObj2Base* a3)
{
	int result;
	__asm
	{
		mov esi, [a3]
		mov edi, [a2]
		mov ecx, [a1]

		call playerBreakPtr
		mov result, ecx
	}
	return result;
}

static const void* const playerStopPtr = (void*)0x475100;
static inline signed int PlayerStop(EntityData1* a1, CharObj2Base* a2, EntityData2* a4)
{
	signed int result;
	__asm
	{
		push[a4]
		mov esi, [a2]
		mov eax, [a1]
		call playerStopPtr
		add esp, 4
		mov result, eax
	}
	return result;
}

//void __usercall PoseEffectMan_Load(int a1@<eax>, int arg0)
static const void* const PoseEffectMan_ptr = (void*)0x477490;
static inline void PoseEffectMan_Load(int a1, int a2)
{
	__asm
	{
		push[a2]
		mov eax, [a1]
		call PoseEffectMan_ptr
		add esp, 4
	}
}