#ifndef _STRUCTS_H_
#define _STRUCTS_H_

#include <all_types.h>

typedef struct {
/* 0x0 */ s16 priority; // Lower means higher priority. -1 means it ignores priority
/* 0x2 */ s16 length;
/* 0x4 */ s16 unk4;
/* 0x6 */ s16 unk6;
/* 0x8 */ s16 additionalCutscene;
/* 0xA */ u8 sound;
/* 0xB */ u8 unkB;
/* 0xC */ s16 unkC;
/* 0xE */ u8 unkE;
/* 0xF */ u8 letterboxSize;
} ActorCutscene; // size = 0x10

typedef struct {
/* 0x00 */ u8 attack[32];
} ActorDamageChart; // size = 0x20

typedef struct {
/* 0x00 */ s32 unk0;
/* 0x04 */ s32 unk4;
/* 0x08 */ f32 unk8;
/* 0x0C */ f32 unkC;
/* 0x10 */ f32 unk10;
/* 0x14 */ f32 unk14;
/* 0x18 */ f32 unk18;
/* 0x1C */ f32 unk1C;
/* 0x20 */ f32 unk20;
/* 0x24 */ f32 unk24;
/* 0x28 */ f32 unk28;
/* 0x2C */ f32 unk2C;
/* 0x30 */ s16 unk30;
/* 0x32 */ s16 unk32;
/* 0x34 */ s16 unk34;
/* 0x36 */ s16 unk36;
/* 0x38 */ s16 unk38;
/* 0x3A */ s16 unk3A;
} ActorEnTest20C; // size = 0x3C

typedef struct {
/* 0x0 */ u32 cont : 1;
/* 0x0 */ u32 type : 4;
/* 0x0 */ u32 offset : 11;
/* 0x2 */ s32 value : 16;
} ActorInitVar; // size = 0x4

typedef struct {
/* 0x0 */ s16 polyStartIndex;
/* 0x2 */ s16 ceilingNodeHead;
/* 0x4 */ s16 wallNodeHead;
/* 0x6 */ s16 floorNodeHead;
} ActorMeshPolyLists; // size = 0x8

typedef struct {
/* 0x0 */ s8 segment;
/* 0x2 */ s16 type;
/* 0x4 */ void* params;
} AnimatedTexture; // size = 0x8

typedef struct {
/* 0x0 */ u16 floorHead;
/* 0x2 */ u16 wallHead;
/* 0x4 */ u16 ceilingHead;
} BgMeshSubdivision; // size = 0x6

typedef struct {
/* 0x0 */ u32 attributes[2];
} BgPolygonAttributes; // size = 0x8

typedef struct {
/* 0x0 */ s16 polyIndex;
/* 0x2 */ u16 next;
} BgPolygonLinkedListNode; // size = 0x4

typedef struct {
/* 0x0 */ u16 maxNodes;
/* 0x2 */ u16 reservedNodes;
/* 0x4 */ BgPolygonLinkedListNode* nodes;
/* 0x8 */ u8* unk8;
} BgScenePolygonLists; // size = 0xC

typedef struct {
/* 0x0 */ s16 sceneNumber;
/* 0x2 */ UNK_TYPE1 pad2[0x2];
/* 0x4 */ u32 maxMemory;
} BgSpecialSceneMaxMemory; // size = 0x8

typedef struct {
/* 0x0 */ s16 sceneId;
/* 0x2 */ s16 maxNodes;
/* 0x4 */ s16 maxPolygons;
/* 0x6 */ s16 maxVertices;
} BgSpecialSceneMaxObjects; // size = 0x8

typedef struct {
/* 0x0 */ s16 sceneNumber;
/* 0x2 */ s16 xSubdivisions;
/* 0x4 */ s16 ySubdivisions;
/* 0x6 */ s16 zSubdivisions;
/* 0x8 */ s32 unk8;
} BgSpecialSceneMeshSubdivision; // size = 0xC

typedef struct {
/* 0x0 */ s16 func;
/* 0x2 */ UNK_TYPE1 pad2[0x6];
} CameraModeParams; // size = 0x8

typedef struct {
/* 0x0 */ u32 validModes;
/* 0x4 */ UNK_TYPE1 pad4[0x4];
/* 0x8 */ CameraModeParams* modes;
} CameraStateParams; // size = 0xC

typedef struct {
/* 0x0 */ u32 unk0;
/* 0x4 */ u8 unk4;
/* 0x5 */ u8 unk5;
} ColBumpInit; // size = 0x8

typedef struct {
/* 0x0 */ u8 unk0;
/* 0x1 */ u8 unk1;
/* 0x2 */ u8 unk2;
/* 0x3 */ u8 unk3;
/* 0x4 */ u8 unk4;
/* 0x5 */ u8 type;
} ColCommonInit; // size = 0x6

typedef struct {
/* 0x0 */ u32 collidesWith;
/* 0x4 */ u8 unk4;
/* 0x5 */ u8 damage;
} ColTouch; // size = 0x8

typedef struct {
/* 0x0 */ u32 unk0;
/* 0x4 */ u8 unk4;
/* 0x5 */ u8 unk5;
} ColTouchInit; // size = 0x8

typedef struct {
/* 0x0 */ u8 red;
/* 0x1 */ u8 green;
/* 0x2 */ u8 blue;
/* 0x3 */ u8 alpha;
} ColorRGBA8; // size = 0x4

typedef struct {
/* 0x00 */ UNK_TYPE1 pad0[0x2];
/* 0x02 */ u16 startFrame;
/* 0x04 */ u16 endFrame;
/* 0x06 */ UNK_TYPE1 pad6[0x2A];
} CsCmdActorAction; // size = 0x30

typedef struct {
/* 0x0 */ u16 base;
/* 0x2 */ u16 startFrame;
/* 0x4 */ u16 endFrame;
} CsCmdBase; // size = 0x6

typedef struct {
/* 0x0 */ u16 unk0;
/* 0x2 */ u16 startFrame;
/* 0x4 */ u16 endFrame;
/* 0x6 */ u8 hour;
/* 0x7 */ u8 minute;
} CsCmdDayTime; // size = 0x8

typedef struct {
/* 0x0 */ u16 setting;
/* 0x2 */ u16 startFrame;
/* 0x4 */ u16 endFrame;
} CsCmdEnvLighting; // size = 0x6

typedef struct {
/* 0x0 */ u16 sequence;
/* 0x2 */ u16 startFrame;
/* 0x4 */ u16 endFrame;
} CsCmdMusicChange; // size = 0x6

typedef struct {
/* 0x0 */ u16 type;
/* 0x2 */ u16 startFrame;
/* 0x4 */ u16 endFrame;
} CsCmdMusicFade; // size = 0x6

typedef struct {
/* 0x0 */ u16 base;
/* 0x2 */ u16 startFrame;
/* 0x4 */ u16 endFrame;
/* 0x6 */ u16 type;
/* 0x8 */ u16 textId1;
/* 0xA */ u16 textId2;
} CsCmdTextbox; // size = 0xC

typedef struct {
/* 0x0 */ u16 unk0;
/* 0x2 */ u16 startFrame;
/* 0x4 */ u16 endFrame;
/* 0x6 */ u8 unk6;
/* 0x7 */ u8 unk7;
/* 0x8 */ u8 unk8;
/* 0x9 */ UNK_TYPE1 pad9[0x3];
} CsCmdUnk190; // size = 0xC

typedef struct {
/* 0x0 */ UNK_TYPE4 unk0;
/* 0x4 */ UNK_TYPE4 unk4;
} CsCmdUnk5A; // size = 0x8

typedef struct {
/* 0x0 */ u16 unk0;
/* 0x2 */ u16 startFrame;
/* 0x4 */ u16 endFrame;
/* 0x6 */ u8 unk6;
/* 0x7 */ u8 unk7;
/* 0x8 */ u8 unk8;
/* 0x9 */ UNK_TYPE1 pad9[0x3];
} CsCmdUnk9B; // size = 0xC

typedef struct {
/* 0x00 */ u8 cutsceneCount;
/* 0x01 */ UNK_TYPE1 pad1[0x3];
/* 0x04 */ u8* segment;
/* 0x08 */ u8 state;
/* 0x09 */ UNK_TYPE1 pad9[0x3];
/* 0x0C */ f32 unkC;
/* 0x10 */ u16 frames;
/* 0x12 */ u16 unk12;
/* 0x14 */ UNK_TYPE1 pad14[0x14];
/* 0x28 */ CsCmdActorAction* actorActions[10];
} CutsceneContext; // size = 0x50

typedef struct {
/* 0x0 */ u32 data;
/* 0x4 */ s16 unk4;
/* 0x6 */ u8 unk6;
/* 0x7 */ u8 unk7;
} CutsceneEntry; // size = 0x8

typedef struct {
/* 0x00 */ u32 chestFlags;
/* 0x04 */ u32 switchFlags[2];
/* 0x0C */ u32 clearedRooms;
/* 0x10 */ u32 collectibleFlags;
} CycleSceneFlags; // size = 0x14

typedef struct {
/* 0x0 */ u16 cycleLength;
/* 0x4 */ Gfx** textureDls;
/* 0x8 */ u8* textureDlOffsets;
} CyclingTextureParams; // size = 0xC

typedef struct {
/* 0x0 */ u32 size;
/* 0x4 */ Gfx* buf;
/* 0x8 */ Gfx* p;
/* 0xC */ Gfx* d;
} DispBuf; // size = 0x10

typedef struct {
/* 0x0 */ u32 vromStart;
/* 0x4 */ u32 vromEnd;
/* 0x8 */ u32 romStart;
/* 0xC */ u32 romEnd;
} DmaEntry; // size = 0x10

typedef struct {
/* 0x00 */ u32 vromStart; // VROM address (source)
/* 0x04 */ void* dramAddr; // DRAM address (destination)
/* 0x08 */ u32 size; // File Transfer size
/* 0x0C */ char* filename; // Filename for debugging
/* 0x10 */ s32 line; // Line for debugging
/* 0x14 */ s32 unk14;
/* 0x18 */ OSMesgQueue* notifyQueue; // Message queue for the notification message
/* 0x1C */ OSMesg notifyMsg; // Completion notification message
} DmaRequest; // size = 0x20

typedef struct {
/* 0x000 */ UNK_TYPE1 pad0[0x184];
/* 0x184 */ ColorRGBA8 unk184;
/* 0x188 */ ColorRGBA8 unk188;
/* 0x18C */ ColorRGBA8 unk18C;
/* 0x190 */ ColorRGBA8 unk190;
/* 0x194 */ UNK_TYPE1 pad194[0xC];
} EffBlureInit1; // size = 0x1A0

typedef struct {
/* 0x00 */ UNK_TYPE1 pad0[0x8];
/* 0x08 */ ColorRGBA8 unk8;
/* 0x0C */ ColorRGBA8 unkC;
/* 0x10 */ ColorRGBA8 unk10;
/* 0x14 */ ColorRGBA8 unk14;
/* 0x18 */ UNK_TYPE1 pad18[0xC];
} EffBlureInit2; // size = 0x24

typedef struct {
/* 0x00 */ UNK_TYPE1 pad0[0x18];
} EffBlureParticle; // size = 0x18

typedef struct {
/* 0x0 */ u8 active;
/* 0x1 */ u8 unk1;
/* 0x2 */ u8 unk2;
/* 0x3 */ UNK_TYPE1 pad3[0x1];
} EffCommon; // size = 0x4

typedef struct {
/* 0x00 */ f32 startSpeed;
/* 0x04 */ f32 endXChange;
/* 0x08 */ f32 endX;
/* 0x0C */ f32 startXChange;
/* 0x10 */ f32 startX;
/* 0x14 */ s16 rotationY;
/* 0x16 */ s16 rotationZ;
} EffShieldParticleParticle; // size = 0x18

typedef struct {
/* 0x0 */ s16 unk0;
/* 0x2 */ s16 maxLife;
/* 0x4 */ ColorRGBA8 color;
} EffTireMarkInit; // size = 0x8

typedef enum EffectSSType {
    EFFECT_SS2_TYPE_DUST = 0x0,
    EFFECT_SS2_TYPE_SPARKLE = 0x1,
    EFFECT_SS2_TYPE_DELETED_2 = 0x2,
    EFFECT_SS2_TYPE_BOMB2 = 0x3,
    EFFECT_SS2_TYPE_BLAST = 0x4,
    EFFECT_SS2_TYPE_G_SPARK = 0x5,
    EFFECT_SS2_TYPE_DODONGO_FIRE = 0x6,
    EFFECT_SS2_TYPE_BUBBLE = 0x7,
    EFFECT_SS2_TYPE_DELETED_8 = 0x8,
    EFFECT_SS2_TYPE_G_RIPPLE = 0x9,
    EFFECT_SS2_TYPE_G_SPLASH = 0xA,
    EFFECT_SS2_TYPE_DELETED_B = 0xB,
    EFFECT_SS2_TYPE_G_FIRE = 0xC,
    EFFECT_SS2_TYPE_LIGHTNING = 0xD,
    EFFECT_SS2_TYPE_BIG_OCTO_BUBBLE = 0xE,
    EFFECT_SS2_TYPE_FRAGMENT = 0xF,
    EFFECT_SS2_TYPE_STICK = 0x10,
    EFFECT_SS2_TYPE_SPLASH = 0x11,
    EFFECT_SS2_TYPE_DELETED_12 = 0x12,
    EFFECT_SS2_TYPE_DELETED_13 = 0x13,
    EFFECT_SS2_TYPE_STONE1 = 0x14,
    EFFECT_SS2_TYPE_HIT_MARK = 0x15,
    EFFECT_SS2_TYPE_PHANTOM_GANON_FLASH = 0x16,
    EFFECT_SS2_TYPE_KAKARIKO_FIRE = 0x17,
    EFFECT_SS2_TYPE_SOLDIER_SEARCH_BALL = 0x18,
    EFFECT_SS2_TYPE_SHARD = 0x19,
    EFFECT_SS2_TYPE_ICE_PIECE = 0x1A,
    EFFECT_SS2_TYPE_ENEMY_ICE = 0x1B,
    EFFECT_SS2_TYPE_FIRE_TAIL = 0x1C,
    EFFECT_SS2_TYPE_ENEMY_FIRE = 0x1D,
    EFFECT_SS2_TYPE_EXTRA = 0x1E,
    EFFECT_SS2_TYPE_DELETED_1F = 0x1F,
    EFFECT_SS2_TYPE_DEAD_DEKU_BABA = 0x20,
    EFFECT_SS2_TYPE_DEAD_DODONGO = 0x21,
    EFFECT_SS2_TYPE_DEAD_DEKU_SCRUB = 0x22,
    EFFECT_SS2_TYPE_DELETED_23 = 0x23,
    EFFECT_SS2_TYPE_ICE_SMOKE = 0x24,
    EFFECT_SS2_TYPE_ICE_BLOCK = 0x25,
    EFFECT_SS2_TYPE_SBN = 0x26,
    EFFECT_SS2_TYPE_LAST_LABEL = 0x27
} EffectSSType;

typedef struct {
/* 0x0 */ u8 spawn;
/* 0x1 */ u8 room;
} EntranceEntry; // size = 0x2

typedef struct {
/* 0x0 */ s8 scene; // TODO what does it means for this to be neagtive?
/* 0x1 */ s8 unk1;
/* 0x2 */ u16 unk2;
} EntranceRecord; // size = 0x4

typedef struct {
/* 0x0 */ s16 x;
/* 0x2 */ s16 y;
/* 0x4 */ s16 z;
/* 0x6 */ s16 reserved;
/* 0x8 */ s16 s;
/* 0xA */ s16 t;
/* 0xC */ s8 r;
/* 0xD */ s8 g;
/* 0xE */ s8 b;
/* 0xF */ s8 a;
} F3DVertexColor; // size = 0x10

typedef struct {
/* 0x0 */ s16 x;
/* 0x2 */ s16 y;
/* 0x4 */ s16 z;
/* 0x6 */ s16 reserved;
/* 0x8 */ s16 s;
/* 0xA */ s16 t;
/* 0xC */ s8 normalX;
/* 0xD */ s8 normalY;
/* 0xE */ s8 normalZ;
/* 0xF */ s8 a;
} F3DVertexNormal; // size = 0x10

typedef struct {
/* 0x0 */ f32 size;
/* 0x4 */ f32 dynamicSizeStep;
/* 0x8 */ u8 state;
/* 0x9 */ u8 sizeGrowsCos2;
/* 0xA */ u8 unkA;
/* 0xB */ u8 flags;
/* 0xC */ u8 unkC;
} FireObjInitParams; // size = 0xD

typedef struct {
/* 0x0 */ u8 unk0;
/* 0x1 */ u8 unk1;
/* 0x2 */ u8 unk2;
/* 0x3 */ u8 unk3;
/* 0x4 */ u8 unk4;
/* 0x5 */ u8 unk5;
/* 0x6 */ u8 unk6;
/* 0x7 */ u8 unk7;
} FireObjLightParams; // size = 0x8

typedef struct {
/* 0x0 */ u8 red;
/* 0x1 */ u8 green;
/* 0x2 */ u8 blue;
/* 0x3 */ u8 alpha;
/* 0x4 */ u8 lodFrac;
} FlashingTexturePrimColor; // size = 0x5

// Font textures are loaded into here
typedef struct {
/* 0x0000 */ u8 unk0[2][120][128];
/* 0x7800 */ u8 unk7800[93][128];
} Font; // size = 0xA680

typedef struct {
/* 0x0000 */ u8 unk0;
/* 0x0001 */ u8 unk1;
/* 0x0002 */ u8 unk2;
/* 0x0003 */ u8 unk3;
/* 0x0004 */ u32 unk4;
/* 0x0008 */ UNK_TYPE1 pad8[0xC];
/* 0x0014 */ s16 data[2784]; // Accessed through REG macros
} GameInfo; // size = 0x15D4

typedef struct {
/* 0x0 */ UNK_TYPE4 size;
/* 0x4 */ void* heapStart;
/* 0x8 */ void* heapAppendStart;
/* 0xC */ void* heapAppendEnd;
} GameStateHeap; // size = 0x10

typedef struct {
/* 0x00000 */ u16 headMagic; // 1234
/* 0x00008 */ Gfx unk8[96];
/* 0x00308 */ Gfx polyXluBuffer[2048];
/* 0x04308 */ Gfx overlayBuffer[1024];
/* 0x06308 */ Gfx unk6308[64];
/* 0x06508 */ Gfx unk6508[64];
/* 0x06708 */ Gfx polyOpaBuffer[13184];
/* 0x20308 */ u16 tailMagic; // 5678
} GfxPool; // size = 0x20310

typedef struct {
/* 0x00 */ s32 unk0;
/* 0x04 */ UNK_TYPE1 pad4[0x40];
} GlobalContext17D98; // size = 0x44

typedef struct {
/* 0x000 */ Gfx* polyOpaBuffer;
/* 0x004 */ Gfx* polyXluBuffer;
/* 0x008 */ UNK_TYPE1 pad8[0x8];
/* 0x010 */ Gfx* overlayBuffer;
/* 0x014 */ UNK_TYPE1 pad14[0x24];
/* 0x038 */ UNK_TYPE4 unk38[8];
/* 0x058 */ OSMesgQueue* unk58;
/* 0x05C */ OSMesgQueue unk5C;
/* 0x074 */ UNK_TYPE1 pad74[0x12C];
/* 0x1A0 */ Gfx* unk1A0;
/* 0x1A4 */ DispBuf unk1A4;
/* 0x1B4 */ Gfx* unk1B4;
/* 0x1B8 */ DispBuf unk1B8;
/* 0x1C8 */ UNK_TYPE1 pad1C8[0xAC];
/* 0x274 */ OSViMode* unk274;
/* 0x278 */ void* zbuffer;
/* 0x27C */ UNK_TYPE1 pad27C[0x1C];
/* 0x298 */ DispBuf overlay;
/* 0x2A8 */ DispBuf polyOpa;
/* 0x2B8 */ DispBuf polyXlu;
/* 0x2C8 */ s32 displaylistCounter;
/* 0x2CC */ void* framebuffer;
/* 0x2D0 */ UNK_TYPE1 pad2D0[0xB];
/* 0x2DB */ u8 framebufferCounter;
/* 0x2DC */ UNK_TYPE1 pad2DC[0x8];
/* 0x2E4 */ f32 unk2E4;
/* 0x2E8 */ f32 unk2E8;
/* 0x2EC */ UNK_TYPE1 pad2EC[0x4];
} GraphicsContext; // size = 0x2F0

typedef enum IRQ_MSG_TYPE {
    IRQ_VERTICAL_RETRACE_MSG = 0x1,
    IRQ_PRENMI_2_MSG = 0x3,
    IRQ_PRENMI_1_MSG = 0x4
} IRQ_MSG_TYPE;

typedef enum IRQ_TYPE {
    IRQ_VERTICAL_RETRACE = 0x29A,
    IRQ_SP = 0x29B,
    IRQ_DP = 0x29C,
    IRQ_PRENMI_1 = 0x29D,
    IRQ_PRENMI_2 = 0x29F,
    IRQ_PRENMI_3 = 0x2A0,
    IRQ_PRENMI_4 = 0x2A1
} IRQ_TYPE;

typedef struct {
/* 0x0 */ u16 buttons;
/* 0x2 */ s8 xAxis;
/* 0x3 */ s8 yAxis;
/* 0x4 */ s8 status;
/* 0x5 */ UNK_TYPE1 pad5[0x1];
} InputInfo; // size = 0x6

typedef struct {
/* 0x0 */ u8 type;
/* 0x2 */ u16 params[6];
} LightInfo; // size = 0xE

typedef struct {
/* 0x0 */ s8 dirX;
/* 0x1 */ s8 dirY;
/* 0x2 */ s8 dirZ;
/* 0x3 */ u8 red;
/* 0x4 */ u8 green;
/* 0x5 */ u8 blue;
/* 0x6 */ u16 pad[3];
} LightInfoDirectionalParams; // size = 0xC

typedef struct {
/* 0x0 */ s16 posX;
/* 0x2 */ s16 posY;
/* 0x4 */ s16 posZ;
/* 0x6 */ u8 red;
/* 0x7 */ u8 green;
/* 0x8 */ u8 blue;
/* 0x9 */ u8 unk9; // func_80102880 sets this only for type 2, func_80102A64 draws something if this is set
/* 0xA */ s16 radius;
} LightInfoPositionalParams; // size = 0xC

typedef struct {
/* 0x00 */ u8 enablePosLights;
/* 0x01 */ u8 numLights;
/* 0x02 */ UNK_TYPE1 pad2[0x6];
/* 0x08 */ Lights7 lights;
} LightMapper; // size = 0x80

typedef struct {
/* 0x0 */ u32 vromStart;
/* 0x4 */ u32 vromEnd;
} ObjectFileTableEntry; // size = 0x8

typedef struct {
/* 0x00 */ u32 textSize;
/* 0x04 */ u32 dataSize;
/* 0x08 */ u32 rodataSize;
/* 0x0C */ u32 bssSize;
/* 0x10 */ u32 nRelocations;
} OverlayRelocationSection; // size = 0x14

typedef struct {
/* 0x00 */ UNK_TYPE1 pad0[0x1C];
} PermanentSceneFlags; // size = 0x1C

typedef struct {
/* 0x0 */ s16 unk0;
/* 0x2 */ s16 unk2;
/* 0x4 */ s16 unk4;
} QuakeRequest14; // size = 0x6

typedef struct {
/* 0x0 */ u8 red;
/* 0x1 */ u8 green;
/* 0x2 */ u8 blue;
} RGB; // size = 0x3

typedef struct {
/* 0x0 */ u8 red;
/* 0x1 */ u8 green;
/* 0x2 */ u8 blue;
/* 0x3 */ u8 alpha;
} RGBA8; // size = 0x4

typedef struct {
/* 0x00 */ s16 intPart[16];
/* 0x20 */ u16 fracPart[16];
} RSPMatrix; // size = 0x40

typedef struct {
/* 0x0 */ u32 vromStart;
/* 0x4 */ u32 vromEnd;
} RoomFileLocation; // size = 0x8

typedef struct {
/* 0x0 */ u32 opaqueDl;
/* 0x4 */ u32 translucentDl;
} RoomMeshType0Params; // size = 0x8

// Fields TODO
typedef struct {
/* 0x0 */ u8 type;
/* 0x1 */ u8 format; // 1 = single, 2 = multi
} RoomMeshType1; // size = 0x2

// Size TODO
typedef struct {
/* 0x0 */ UNK_TYPE1 pad0[0x10];
} RoomMeshType1Params; // size = 0x10

typedef struct {
/* 0x0 */ UNK_TYPE1 pad0[0x10];
} RoomMeshType2Params; // size = 0x10

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x04 */ u32 data2;
} SCmdBase;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x04 */ void* segment;
} SCmdSpawnList;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  num;
/* 0x04 */ void* segment;
} SCmdActorList;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x04 */ void* segment;
} SCmdCsCameraList;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x04 */ void* segment;
} SCmdColHeader;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  num;
/* 0x04 */ void* segment;
} SCmdRoomList;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x02 */ UNK_TYPE1 pad2[2];
/* 0x04 */ s8  west;
/* 0x05 */ s8  vertical;
/* 0x06 */ s8  south;
/* 0x07 */ u8  clothIntensity;
} SCmdWindSettings;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x04 */ void* segment;
} SCmdEntranceList;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  cUpElfMsgNum;
/* 0x04 */ u32 keepObjectId;
} SCmdSpecialFiles;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  gpFlag1;
/* 0x04 */ u32 gpFlag2;
} SCmdRoomBehavior;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x04 */ void* segment;
} SCmdMesh;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  num;
/* 0x04 */ void* segment;
} SCmdObjectList;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  num;
/* 0x04 */ void* segment;
} SCmdLightList;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x04 */ void* segment;
} SCmdPathList;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  num;
/* 0x04 */ void* segment;
} SCmdTransiActorList;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  num;
/* 0x04 */ void* segment;
} SCmdLightSettingList;
// Cloudmodding has this as Environment Settings

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x02 */ UNK_TYPE1 pad2[2];
/* 0x04 */ u8  hour;
/* 0x05 */ u8  min;
/* 0x06 */ u8  unk6;
} SCmdTimeSettings;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x02 */ UNK_TYPE1 pad2[2];
/* 0x04 */ u8  skyboxId;
/* 0x05 */ u8  unk5;
/* 0x06 */ u8  unk6;
} SCmdSkyboxSettings;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x02 */ UNK_TYPE1 pad2[2];
/* 0x04 */ u8  unk4;
/* 0x05 */ u8  unk5;
} SCmdSkyboxDisables;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x04 */ void* segment;
} SCmdExitList;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x04 */ u32 data2;
} SCmdEndMarker;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  bgmId;
/* 0x02 */ UNK_TYPE1 pad2[4];
/* 0x06 */ u8  nighttimeSFX;
/* 0x07 */ u8  musicSeq;
} SCmdSoundSettings;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x02 */ UNK_TYPE1 pad2[5];
/* 0x07 */ u8  echo;
} SCmdEchoSettings;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x04 */ void* segment;
} SCmdCutsceneData;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x04 */ void* segment;
} SCmdAltHeaders;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x04 */ u32 data2;
} SCmdWorldMapVisited;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x04 */ void* segment;
} SCmdTextureAnimations;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  num;
/* 0x04 */ void* segment;
} SCmdCutsceneActorList;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  data1;
/* 0x04 */ void* segment;
} SCmdMinimapSettings;

typedef struct {
/* 0x00 */ u8  code;
/* 0x01 */ u8  num;
/* 0x04 */ void* segment;
} SCmdMinimapChests;

// Extra information in the save context that is not saved
typedef struct {
/* 0x000 */ UNK_TYPE1 pad0[0xC];
/* 0x00C */ s32 sceneSetupIndex;
/* 0x010 */ s32 unk10;
/* 0x014 */ UNK_TYPE1 pad14[0x2E];
/* 0x042 */ s16 unk42;
/* 0x044 */ UNK_TYPE1 pad44[0x232];
/* 0x276 */ u8 unk276;
/* 0x277 */ UNK_TYPE1 pad277[0x9];
/* 0x280 */ u16 unk280;
/* 0x282 */ u16 unk282;
/* 0x284 */ UNK_TYPE1 pad284[0x28];
/* 0x2AC */ u8 cutsceneTrigger;
/* 0x2AD */ UNK_TYPE1 pad2AD[0x17];
/* 0x2C4 */ f32 unk2C4;
/* 0x2C8 */ CycleSceneFlags cycleSceneFlags[120];
} SaveContextExtra; // size = 0xC28

typedef struct {
/* 0x00 */ u8 items[24];
/* 0x18 */ u8 masks[24];
/* 0x30 */ u8 quantities[24];
/* 0x48 */ UNK_TYPE1 pad48[0x40];
} SaveContextInventory; // size = 0x88

// Save Context that is only stored in an owl save
typedef struct {
/* 0x0000 */ UNK_TYPE1 pad0[0x1];
/* 0x0001 */ u8 unk1;
/* 0x0002 */ u8 unk2;
/* 0x0003 */ UNK_TYPE1 pad3[0x2];
/* 0x0005 */ u8 unk5;
/* 0x0006 */ UNK_TYPE1 pad6[0x2C8E];
} SaveContextOwl; // size = 0x2C94

typedef struct {
/* 0x00 */ u8 zelda[6]; // Will always be "ZELDA3" for a valid save
/* 0x06 */ UNK_TYPE1 pad6[0xA];
/* 0x10 */ s16 maxLife;
/* 0x12 */ s16 currentLife;
/* 0x14 */ UNK_TYPE1 pad14[0x1];
/* 0x15 */ s8 currentMagic;
/* 0x16 */ UNK_TYPE1 pad16[0x12];
} SaveContext_struct1; // size = 0x28

typedef struct {
/* 0x00 */ UNK_TYPE1 pad0[0x22];
} SaveContext_struct2; // size = 0x22

typedef union {
/* Command: N/A  */ SCmdBase              base;
/* Command: 0x00 */ SCmdSpawnList         spawnList;
/* Command: 0x01 */ SCmdActorList         actorList;
/* Command: 0x02 */ SCmdCsCameraList      csCameraList;
/* Command: 0x03 */ SCmdColHeader         colHeader;
/* Command: 0x04 */ SCmdRoomList          roomList;
/* Command: 0x05 */ SCmdWindSettings      windSettings;
/* Command: 0x06 */ SCmdEntranceList      entranceList;
/* Command: 0x07 */ SCmdSpecialFiles      specialFiles;
/* Command: 0x08 */ SCmdRoomBehavior      roomBehavior;
/* Command: 0x09 */ // Unused
/* Command: 0x0A */ SCmdMesh              mesh;
/* Command: 0x0B */ SCmdObjectList        objectList;
/* Command: 0x0C */ SCmdLightList         lightList;
/* Command: 0x0D */ SCmdPathList          pathList;
/* Command: 0x0E */ SCmdTransiActorList   transiActorList;
/* Command: 0x0F */ SCmdLightSettingList  lightSettingList;
/* Command: 0x10 */ SCmdTimeSettings      timeSettings;
/* Command: 0x11 */ SCmdSkyboxSettings    skyboxSettings;
/* Command: 0x12 */ SCmdSkyboxDisables    skyboxDisables;
/* Command: 0x13 */ SCmdExitList          exitList;
/* Command: 0x14 */ SCmdEndMarker         endMarker;
/* Command: 0x15 */ SCmdSoundSettings     soundSettings;
/* Command: 0x16 */ SCmdEchoSettings      echoSettings;
/* Command: 0x17 */ SCmdCutsceneData      cutsceneData;
/* Command: 0x18 */ SCmdAltHeaders        altHeaders;
/* Command: 0x19 */ SCmdWorldMapVisited   worldMapVisited;
/* Command: 0x1A */ SCmdTextureAnimations textureAnimations;
/* Command: 0x1B */ SCmdCutsceneActorList cutsceneActorList;
/* Command: 0x1C */ SCmdMinimapSettings   minimapSettings;
/* Command: 0x1D */ // Unused
/* Command: 0x1E */ SCmdMinimapChests     minimapChests;
} SceneCmd; // size = 0x8

typedef struct {
/* 0x0 */ u32 entranceCount;
/* 0x4 */ EntranceRecord** entrances;
/* 0x8 */ char* name;
} SceneEntranceTableEnty; // size = 0xC

typedef struct {
/* 0x00 */ s16 scenes[27];
} SceneIdList; // size = 0x36

typedef struct {
/* 0x00 */ s16 id; // Negative ids mean that the object is unloaded
/* 0x02 */ UNK_TYPE1 pad2[0x2];
/* 0x04 */ void* vramAddr;
/* 0x08 */ DmaRequest dmaReq;
/* 0x28 */ OSMesgQueue unk28;
/* 0x40 */ UNK_TYPE1 pad40[0x4];
} SceneObject; // size = 0x44

typedef struct {
/* 0x0 */ u32 romStart;
/* 0x4 */ u32 romEnd;
/* 0x8 */ u16 unk8;
/* 0xA */ UNK_TYPE1 padA[0x1];
/* 0xB */ u8 sceneConfig; // TODO: This at least controls the behavior of animated textures. Does it do more?
/* 0xC */ UNK_TYPE1 padC[0x1];
/* 0xD */ u8 unkD;
/* 0xE */ UNK_TYPE1 padE[0x2];
} SceneTableEntry; // size = 0x10

typedef struct {
/* 0x0 */ s8 xStep;
/* 0x1 */ s8 yStep;
/* 0x2 */ u8 width;
/* 0x3 */ u8 height;
} ScrollingTextureParams; // size = 0x4

typedef struct {
/* 0x0 */ s8 letterboxTarget;
/* 0x1 */ s8 letterboxMagnitude;
/* 0x2 */ s8 pillarboxTarget;
/* 0x3 */ s8 pillarboxMagnitude;
} ShrinkWindowContext; // size = 0x4

typedef struct {
/* 0x00 */ UNK_TYPE1 pad0[0x4];
/* 0x04 */ void* savefile;
/* 0x08 */ UNK_TYPE1 pad8[0x4];
/* 0x0C */ s16 unkC;
/* 0x0E */ UNK_TYPE1 padE[0xA];
/* 0x18 */ OSTime unk18;
} SramContext; // size = 0x20

typedef struct {
/* 0x00 */ UNK_TYPE4 unk0;
/* 0x04 */ UNK_TYPE4 unk4;
/* 0x08 */ UNK_TYPE4 unk8;
/* 0x0C */ f32 unkC;
/* 0x10 */ ColorRGBA8 unk10;
} TargetContextEntry; // size = 0x14

typedef struct {
/* 0x0 */ u32 texture;
/* 0x4 */ s16 unk4;
/* 0x6 */ s16 unk6;
/* 0x8 */ u8 unk8;
/* 0x9 */ u8 unk9;
/* 0xA */ u8 fadeOutDelay;
/* 0xB */ u8 fadeInDelay;
/* 0xC */ s16 alpha;
/* 0xE */ s16 color;
} TitleCardContext; // size = 0x10

typedef struct {
/* 0x0 */ s8 unk0;
/* 0x1 */ UNK_TYPE1 pad1[0x1];
/* 0x2 */ s8 unk2;
/* 0x3 */ UNK_TYPE1 pad3[0x1];
/* 0x4 */ s16 actorIndex; // negative means already loaded?
/* 0x6 */ s16 x;
/* 0x8 */ s16 y;
/* 0xA */ s16 z;
/* 0xC */ s16 yRot; // lower 7 bits contain cutscene number
/* 0xE */ u16 variable;
} TransitionActorInit; // size = 0x10

typedef struct {
/* 0x0 */ f32 x;
/* 0x4 */ f32 y;
/* 0x8 */ f32 z;
} Vec3f; // size = 0xC

typedef struct {
/* 0x0 */ s16 x;
/* 0x2 */ s16 y;
/* 0x4 */ s16 z;
} Vec3s; // size = 0x6

typedef struct {
/* 0x0 */ s32 topY;
/* 0x4 */ s32 bottomY;
/* 0x8 */ s32 leftX;
/* 0xC */ s32 rightX;
} Viewport; // size = 0x10

typedef struct {
/* 0x00 */ void* bufferEnd;
/* 0x04 */ u32 romReadHead;
/* 0x08 */ u32 amountLeftToRead;
/* 0x0C */ u32 loadNextChunkBoundary;
/* 0x10 */ u32 destBufferEnd;
} Yaz0DecompState; // size = 0x14

typedef struct {
/* 0x0 */ unsigned int inst1;
/* 0x4 */ unsigned int inst2;
/* 0x8 */ unsigned int inst3;
/* 0xC */ unsigned int inst4;
} __osExceptionVector; // size = 0x10

typedef void(*actor_init_var_func)(u8*, ActorInitVar*);

typedef void(*eff_destroy_func)(void* params);

typedef void(*eff_draw_func)(void* params, GraphicsContext* gCtxt);

typedef void(*eff_init_func)(void* params, void* init);

typedef s32(*eff_update_func)(void* params);

typedef void*(*fault_address_converter_func)(void* addr, void* arg);

typedef void(*fault_client_func)(void* arg1, void* arg2);

typedef unsigned long(*func)(void);

typedef void(*func_ptr)(void);

typedef void(*light_map_directional_func)(LightMapper* mapper, void* params, Vec3f* pos);

typedef void(*osCreateThread_func)(void*);

typedef void*(*printf_func)(void*, char*, size_t);

typedef struct {
/* 0x00 */ UNK_TYPE1 pad0[0x20];
} s800E03A0; // size = 0x20

typedef struct {
/* 0x000 */ OSThread unk0;
/* 0x1B0 */ s8 argCount;
/* 0x1B1 */ s8 unk1B1;
/* 0x1B2 */ UNK_TYPE1 pad1B2[0x2];
/* 0x1B4 */ UNK_TYPE1 func;
/* 0x1B5 */ UNK_TYPE1 pad1B5[0x3];
/* 0x1B8 */ s32 arg0;
/* 0x1BC */ s32 arg1;
} s8018571C; // size = 0x1C0

typedef struct {
/* 0x00 */ int unk0;
/* 0x04 */ void* unk4;
/* 0x08 */ int unk8;
/* 0x0C */ int unkC;
/* 0x10 */ int unk10;
/* 0x14 */ OSMesgQueue unk14;
} s80185D40; // size = 0x2C

typedef struct {
/* 0x00 */ u32 unk0;
/* 0x04 */ u8 unk4;
/* 0x05 */ u8 unk5;
/* 0x06 */ u8 unk6;
/* 0x07 */ UNK_TYPE1 pad7[0x2];
/* 0x09 */ u8 unk9;
/* 0x0A */ UNK_TYPE1 padA[0x2];
/* 0x0C */ u32 unkC;
/* 0x10 */ u16 unk10;
/* 0x12 */ u16 unk12;
/* 0x14 */ u16 unk14;
/* 0x16 */ UNK_TYPE1 pad16[0x2];
/* 0x18 */ u32 unk18;
/* 0x1C */ u32 unk1C;
/* 0x20 */ u32 unk20;
/* 0x24 */ u32 unk24;
/* 0x28 */ u32 unk28;
/* 0x2C */ u32 unk2C;
/* 0x30 */ u32 unk30;
/* 0x34 */ u32 unk34;
} s8018CFAC; // size = 0x38

typedef struct {
/* 0x0 */ u8 unk0;
/* 0x1 */ u8 unk1;
/* 0x2 */ u8 unk2;
/* 0x3 */ u8 unk3;
/* 0x4 */ u8 unk4;
/* 0x5 */ u8 unk5;
/* 0x6 */ u8 unk6;
/* 0x7 */ u8 unk7;
} s801AEC84; // size = 0x8

typedef struct {
/* 0x00 */ UNK_TYPE1 pad0[0x14];
} s801FE7C0; // size = 0x14

typedef struct {
/* 0x00 */ Vec3f unk0;
/* 0x0C */ Vec3f unkC;
/* 0x18 */ s16 unk18;
/* 0x1A */ s16 unk1A;
} s80874650; // size = 0x1C

typedef struct {
/* 0x00 */ f32 x[4];
/* 0x10 */ f32 y[4];
/* 0x20 */ f32 z[4];
/* 0x30 */ f32 w[4];
} z_Matrix; // size = 0x40

// Related to collision?
typedef struct {
/* 0x00 */ ActorDamageChart* damageChart;
/* 0x04 */ Vec3f displacement;
/* 0x10 */ s16 unk10;
/* 0x12 */ s16 unk12;
/* 0x14 */ s16 unk14;
/* 0x16 */ u8 mass;
/* 0x17 */ u8 health;
/* 0x18 */ u8 damage;
/* 0x19 */ u8 damageEffect;
/* 0x1A */ u8 impactEffect;
/* 0x1B */ UNK_TYPE1 pad1B[0x1];
} ActorA0; // size = 0x1C

typedef struct {
/* 0x0 */ s16 id;
/* 0x2 */ Vec3s pos;
/* 0x8 */ Vec3s rot;
/* 0xE */ s16 params;
} ActorEntry; // size = 0x10

typedef struct {
/* 0x00 */ Vec3f scale;
/* 0x0C */ Vec3s rotation;
/* 0x14 */ Vec3f pos;
} ActorMeshParams; // size = 0x20

typedef struct {
/* 0x0 */ u16 attributeIndex;
/* 0x2 */ u16 vertA; // upper 3 bits contain flags
/* 0x4 */ u16 vertB; // upper 3 bits contain flags
/* 0x6 */ u16 vertC;
/* 0x8 */ Vec3s normal;
/* 0xE */ s16 unkE;
} BgPolygon; // size = 0x10

typedef struct {
/* 0x0 */ BgPolygonLinkedListNode* nodes;
/* 0x4 */ u32 nextFreeNode;
/* 0x8 */ s32 maxNodes;
} BgPolygonLinkedList; // size = 0xC

typedef struct {
/* 0x0 */ Vec3s pos;
} BgVertex; // size = 0x6

typedef struct {
/* 0x0 */ Vec3s minPos;
/* 0x6 */ UNK_TYPE1 xLength; // Created by retype action
/* 0x7 */ UNK_TYPE1 pad7[0x1];
/* 0x8 */ UNK_TYPE1 zLength; // Created by retype action
/* 0x9 */ UNK_TYPE1 pad9[0x3];
/* 0xC */ u32 properties;
} BgWaterBox; // size = 0x10

typedef struct {
/* 0x0 */ UNK_TYPE1 pad0[0x4];
/* 0x4 */ BgWaterBox* boxes;
} BgWaterboxList; // size = 0x8

typedef struct {
/* 0x00 */ u8 unk0;
/* 0x04 */ ColTouchInit unk4;
/* 0x0C */ ColBumpInit unkC;
/* 0x14 */ u8 unk14;
/* 0x15 */ u8 unk15;
/* 0x16 */ u8 unk16;
} ColBodyInfoInit; // size = 0x18

typedef struct {
/* 0x0 */ u32 collidesWith;
/* 0x4 */ u8 unk4;
/* 0x5 */ u8 unk5;
/* 0x6 */ Vec3s unk6;
} ColBump; // size = 0xC

typedef struct {
/* 0x0 */ s16 radius;
/* 0x2 */ s16 height;
/* 0x4 */ s16 yOffset;
/* 0x6 */ Vec3s loc;
} ColCylinderParams; // size = 0xC

typedef struct {
/* 0x00 */ Vec3f pointA;
/* 0x0C */ Vec3f pointB;
/* 0x18 */ Vec3f pointC;
/* 0x24 */ Vec3f pointD;
/* 0x30 */ Vec3s unk30;
/* 0x36 */ Vec3s unk36;
/* 0x3C */ f32 unk3C;
} ColQuadParams; // size = 0x40

typedef struct {
/* 0x0 */ Vec3s loc;
/* 0x6 */ s16 radius;
} ColSphereCollisionInfo; // size = 0x8

typedef struct {
/* 0x00 */ Vec3s unk0;
/* 0x06 */ s16 unk6;
/* 0x08 */ ColSphereCollisionInfo colInfo;
/* 0x10 */ f32 unk10;
/* 0x14 */ u8 unk14;
/* 0x15 */ UNK_TYPE1 pad15[0x3];
} ColSphereParams; // size = 0x18

typedef struct {
/* 0x0 */ u8 unk0;
/* 0x1 */ ColSphereCollisionInfo unk1;
/* 0xA */ s16 unkA;
} ColSphereParamsInit; // size = 0xC

typedef struct {
/* 0x00 */ Vec3f pointA;
/* 0x0C */ Vec3f pointB;
/* 0x18 */ Vec3f pointC;
/* 0x24 */ Vec3f unitNormal;
/* 0x30 */ f32 unk30;
} ColTriParams; // size = 0x34

typedef struct {
/* 0x00 */ Vec3f unk0;
/* 0x0C */ Vec3f unkC;
/* 0x18 */ Vec3f unk18;
} ColTriParamsInit; // size = 0x24

typedef struct {
/* 0x000 */ EffBlureParticle particles[16];
/* 0x180 */ UNK_TYPE1 pad180[0x4];
/* 0x184 */ f32 unk184;
/* 0x188 */ u16 unk188;
/* 0x18A */ UNK_TYPE1 pad18A[0x4];
/* 0x18E */ ColorRGBA8 unk18E;
/* 0x192 */ ColorRGBA8 unk192;
/* 0x196 */ ColorRGBA8 unk196;
/* 0x19A */ ColorRGBA8 unk19A;
/* 0x19E */ u8 unk19E;
/* 0x19F */ u8 unk19F;
/* 0x1A0 */ u8 unk1A0;
/* 0x1A1 */ u8 unk1A1;
/* 0x1A2 */ UNK_TYPE1 pad1A2[0xA];
} EffBlureParams; // size = 0x1AC

typedef struct {
/* 0x00 */ u32 paramsSize;
/* 0x04 */ eff_init_func init;
/* 0x08 */ eff_destroy_func destroy;
/* 0x0C */ eff_update_func update;
/* 0x10 */ eff_draw_func draw;
} EffInfo; // size = 0x14

typedef struct {
/* 0x00 */ u8 numParticles;
/* 0x02 */ Vec3s position;
/* 0x08 */ ColorRGBA8 primColorStart;
/* 0x0C */ ColorRGBA8 envColorStart;
/* 0x10 */ ColorRGBA8 primColorMid;
/* 0x14 */ ColorRGBA8 envColorMid;
/* 0x18 */ ColorRGBA8 primColorEnd;
/* 0x1C */ ColorRGBA8 envColorEnd;
/* 0x20 */ f32 acceleration;
/* 0x24 */ f32 maxInitialSpeed;
/* 0x28 */ f32 lengthCutoff;
/* 0x2C */ u8 duration;
/* 0x2E */ LightInfoPositionalParams lightParams;
/* 0x3C */ s32 hasLight;
} EffShieldParticleInit; // size = 0x40

typedef struct {
/* 0x00 */ Vec3f velocity;
/* 0x0C */ Vec3f position;
/* 0x18 */ Vec3s unk18;
/* 0x1E */ Vec3s unk1E;
} EffSparkParticle; // size = 0x24

typedef struct {
/* 0x00 */ UNK_TYPE2 active;
/* 0x02 */ Vec3s position1;
/* 0x08 */ Vec3s position2;
/* 0x0E */ s16 life;
/* 0x10 */ UNK_TYPE1 pad10[0x4];
/* 0x14 */ UNK_TYPE4 unk14;
} EffTireMarkParticle; // size = 0x18

typedef struct {
/* 0x00 */ Vec3f position;
/* 0x0C */ Vec3f velocity;
/* 0x18 */ Vec3f acceleration;
/* 0x24 */ ColorRGBA8 color1;
/* 0x28 */ ColorRGBA8 color2;
/* 0x2C */ s16 scale;
/* 0x2E */ s16 scaleChangePerFrame;
/* 0x30 */ s16 life;
/* 0x32 */ u16 flags; // bit0: ? bit1: ? bit2: randomize colors
/* 0x34 */ u8 type; // type0: start small, get big, fade away type1: start big, fade away
} EffectDustInit; // size = 0x35

typedef union {
    F3DVertexColor color;
    F3DVertexNormal normal;
} F3DVertex; // size = 0x10

typedef struct {
/* 0x00 */ u16* fb;
/* 0x04 */ u16 w;
/* 0x06 */ u16 h;
/* 0x08 */ u16 yStart;
/* 0x0A */ u16 yEnd;
/* 0x0C */ u16 xStart;
/* 0x0E */ u16 xEnd;
/* 0x10 */ u16 foreColor;
/* 0x12 */ u16 backColor;
/* 0x14 */ u16 cursorX;
/* 0x16 */ u16 cursorY;
/* 0x18 */ u32* font;
/* 0x1C */ u8 charW;
/* 0x1D */ u8 charH;
/* 0x1E */ s8 charWPad;
/* 0x1F */ s8 charHPad;
/* 0x20 */ u16 printColors[10];
/* 0x34 */ u8 escCode;
/* 0x35 */ u8 osSyncPrintfEnabled;
/* 0x38 */ func_ptr inputCallback;
} FaultDrawer; // size = 0x3C

typedef struct {
/* 0x0 */ u16 cycleLength;
/* 0x2 */ u16 numKeyFrames;
/* 0x4 */ FlashingTexturePrimColor* primColors;
/* 0x8 */ RGBA8* envColors;
/* 0xC */ u16* keyFrames;
} FlashingTextureParams; // size = 0x10

typedef struct {
/* 0x00 */ void* loadedRamAddr;
/* 0x04 */ u32 vromStart;
/* 0x08 */ u32 vromEnd;
/* 0x0C */ void* vramStart;
/* 0x10 */ void* vramEnd;
/* 0x14 */ UNK_TYPE4 unk14;
/* 0x18 */ func_ptr init;
/* 0x1C */ func_ptr destroy;
/* 0x20 */ UNK_TYPE4 unk20;
/* 0x24 */ UNK_TYPE4 unk24;
/* 0x28 */ UNK_TYPE4 unk28;
/* 0x2C */ u32 instanceSize;
} GameStateOverlay; // size = 0x30

typedef struct {
/* 0x00 */ u8 unk0;
/* 0x01 */ u8 unk1;
/* 0x02 */ u16 unk2;
/* 0x04 */ Vec3f unk4;
/* 0x10 */ Vec3f unk10;
} GlobalContext1F78; // size = 0x1C

typedef struct {
/* 0x00 */ InputInfo current;
/* 0x06 */ InputInfo last;
/* 0x0C */ InputInfo pressEdge;
/* 0x12 */ InputInfo releaseEdge;
} Input; // size = 0x18

typedef struct {
/* 0x0 */ u8 type;
/* 0x2 */ LightInfoDirectionalParams params;
} LightInfoDirectional; // size = 0xE

typedef struct {
/* 0x0 */ u8 type;
/* 0x2 */ LightInfoPositionalParams params;
} LightInfoPositional; // size = 0xE

typedef struct {
/* 0x00 */ Vec3f a;
/* 0x0C */ Vec3f b;
} LineSegment; // size = 0x18

typedef struct {
/* 0x00 */ Vec3f pos;
/* 0x0C */ Vec3s rot;
} PosRot; // size = 0x14

typedef struct {
/* 0x0 */ u8 type;
/* 0x1 */ u8 count;
/* 0x2 */ UNK_TYPE1 pad2[0x2];
/* 0x4 */ RoomMeshType0Params* paramsStart;
/* 0x8 */ RoomMeshType0Params* paramsEnd;
} RoomMeshType0; // size = 0xC

typedef struct {
/* 0x0 */ u8 type;
/* 0x1 */ u8 count;
/* 0x2 */ UNK_TYPE1 pad2[0x2];
/* 0x4 */ RoomMeshType2Params* paramsStart;
/* 0x8 */ RoomMeshType2Params* paramsEnd;
} RoomMeshType2; // size = 0xC

// Permanent save context, kept in regular save files
typedef struct {
/* 0x0000 */ u32 entranceIndex; // bits 0-3 : offset; 4-8: spawn index; 9-15: scene index
/* 0x0004 */ UNK_TYPE1 pad4[0x4];
/* 0x0008 */ u32 cutscene;
/* 0x000C */ u16 time;
/* 0x000E */ UNK_TYPE1 padE[0xA];
/* 0x0018 */ u32 day;
/* 0x001C */ u32 daysElapsed;
/* 0x0020 */ u8 unk20;
/* 0x0021 */ UNK_TYPE1 pad21[0x2];
/* 0x0023 */ u8 owlSave;
/* 0x0024 */ SaveContext_struct1 unk24;
/* 0x004C */ SaveContext_struct2 unk4C;
/* 0x006E */ UNK_TYPE1 pad6E[0x2];
/* 0x0070 */ SaveContextInventory inv;
/* 0x00F8 */ PermanentSceneFlags sceneFlags[120];
/* 0x0E18 */ UNK_TYPE1 padE18[0xE0];
/* 0x0EF8 */ u8 weekEventReg[100];
/* 0x0F5C */ u32 mapsVisited;
/* 0x0F60 */ UNK_TYPE1 padF60[0x8C];
/* 0x0FEC */ u8 lotteryCodes[9];
/* 0x0FF5 */ u8 spiderHouseMaskOrder[6];
/* 0x0FFB */ u8 bomberCode[5];
/* 0x1000 */ UNK_TYPE1 pad1000[0xA];
/* 0x100A */ u16 checksum;
} SaveContextPerm; // size = 0x100C

typedef struct {
/* 0x000 */ void* objectVramStart;
/* 0x004 */ void* objectVramEnd;
/* 0x008 */ u8 objectCount;
/* 0x009 */ u8 unk9;
/* 0x00A */ u8 unkA;
/* 0x00B */ u8 keepObjectId;
/* 0x00C */ SceneObject objects[35];
} SceneContext; // size = 0x958

typedef struct {
/* 0x00 */ Vec3f focalPointChange;
/* 0x0C */ Vec3f eyeChange;
/* 0x18 */ s16 rotZ;
/* 0x1A */ s16 zoom;
/* 0x1C */ UNK_TYPE1 pad1C[0x2];
} ShakeInfo; // size = 0x1E

typedef struct {
/* 0x00 */ Vec3f focalPointChange;
/* 0x0C */ Vec3f eyeChange;
/* 0x18 */ s16 unk18;
/* 0x1A */ s16 unk1A;
/* 0x1C */ f32 unk1C;
/* 0x20 */ f32 unk20;
} UnkQuakeCalcStruct; // size = 0x24

typedef struct {
/* 0x000 */ u32 magic;
/* 0x004 */ GraphicsContext* gfxCtx;
/* 0x008 */ Viewport viewport;
/* 0x018 */ f32 fovy;
/* 0x01C */ f32 zNear;
/* 0x020 */ f32 zFar;
/* 0x024 */ f32 scale;
/* 0x028 */ Vec3f eye;
/* 0x034 */ Vec3f focalPoint;
/* 0x040 */ Vec3f upDir;
/* 0x04C */ UNK_TYPE1 pad4C[0x4];
/* 0x050 */ Vp vp;
/* 0x060 */ Mtx projection;
/* 0x0A0 */ Mtx viewing;
/* 0x0E0 */ Mtx unkE0;
/* 0x120 */ Mtx* projectionPtr;
/* 0x124 */ Mtx* viewingPtr;
/* 0x128 */ Vec3f quakeRot;
/* 0x134 */ Vec3f quakeScale;
/* 0x140 */ f32 quakeSpeed;
/* 0x144 */ Vec3f currQuakeRot;
/* 0x150 */ Vec3f currQuakeScale;
/* 0x15C */ u16 normal;
/* 0x15E */ UNK_TYPE1 pad15E[0x2];
/* 0x160 */ u32 flags; // bit 3: Render to an orthographic perspective
/* 0x164 */ UNK_TYPE4 unk164;
} View; // size = 0x168

typedef void(*fault_update_input_func)(Input* input);

typedef struct {
/* 0x00 */ Vec3s min;
/* 0x06 */ Vec3s max;
/* 0x0C */ u16 numVertices;
/* 0x10 */ BgVertex* vertices;
/* 0x14 */ u16 numPolygons;
/* 0x18 */ BgPolygon* polygons;
/* 0x1C */ BgPolygonAttributes* attributes;
/* 0x20 */ UNK_PTR cameraData;
/* 0x24 */ u16 numWaterBoxes;
/* 0x28 */ BgWaterBox* waterboxes;
} BgMeshHeader; // size = 0x2C

typedef struct {
/* 0x00 */ ColCommonInit base;
/* 0x08 */ ColBodyInfoInit body;
/* 0x20 */ ColCylinderParams info;
} ColCylinderInit; // size = 0x2C

typedef struct {
/* 0x00 */ ColCommonInit base;
/* 0x08 */ ColBodyInfoInit body;
/* 0x20 */ ColQuadParams params;
} ColQuadInit; // size = 0x60

typedef struct {
/* 0x00 */ ColBodyInfoInit body;
/* 0x18 */ ColSphereParamsInit params;
} ColSphereGroupElementInit; // size = 0x24

typedef struct {
/* 0x0 */ ColCommonInit base;
/* 0x6 */ UNK_TYPE1 pad6[0x2];
/* 0x8 */ u32 count;
/* 0xC */ ColSphereGroupElementInit* init;
} ColSphereGroupInit; // size = 0x10

typedef struct {
/* 0x00 */ ColCommonInit base;
/* 0x08 */ ColBodyInfoInit body;
/* 0x20 */ ColSphereParamsInit info;
} ColSphereInit; // size = 0x2C

typedef struct {
/* 0x00 */ ColBodyInfoInit body;
/* 0x18 */ ColTriParamsInit params;
} ColTriInit; // size = 0x3C

typedef struct {
/* 0x000 */ EffCommon base;
/* 0x004 */ EffBlureParams params;
} EffBlure; // size = 0x1B0

typedef struct {
/* 0x000 */ Vec3s position;
/* 0x008 */ s32 numParticles; // Will be calculated as particleFactor1 * particleFactor2 + 2
/* 0x00C */ EffSparkParticle particles[32];
/* 0x48C */ f32 velocity;
/* 0x490 */ f32 gravity;
/* 0x494 */ u32 particleFactor1;
/* 0x498 */ u32 particleFactor2;
/* 0x49C */ ColorRGBA8 colorStart[4];
/* 0x4AC */ ColorRGBA8 colorEnd[4];
/* 0x4BC */ s32 age;
/* 0x4C0 */ s32 duration;
} EffSparkParams; // size = 0x4C4

typedef struct {
/* 0x000 */ EffTireMarkParticle particles[64];
/* 0x600 */ s16 unk600;
/* 0x602 */ s16 numParticles;
/* 0x604 */ s16 maxLife;
/* 0x606 */ ColorRGBA8 color;
/* 0x60A */ UNK_TYPE1 pad60A[0x2];
} EffTireMarkParams; // size = 0x60C

typedef struct {
/* 0x000 */ View view;
/* 0x168 */ UNK_TYPE1 pad168[0x84];
/* 0x1EC */ u16 unk1EC;
/* 0x1EE */ u16 unk1EE;
/* 0x1F0 */ u8 unk1F0;
/* 0x1F1 */ UNK_TYPE1 pad1F1[0x3];
/* 0x1F4 */ f32 unk1F4;
/* 0x1F8 */ UNK_TYPE1 pad1F8[0xC];
/* 0x204 */ u16 unk204;
/* 0x206 */ UNK_TYPE1 pad206[0x6];
/* 0x20C */ f32 unk20C;
/* 0x210 */ f32 unk210;
/* 0x214 */ f32 unk214;
/* 0x218 */ f32 unk218;
/* 0x21C */ f32 unk21C;
/* 0x220 */ f32 unk220;
/* 0x224 */ UNK_TYPE1 pad224[0xAC];
} GlobalContext16D30; // size = 0x2D0

typedef struct {
/* 0x000 */ View view;
/* 0x168 */ UNK_TYPE1 pad168[0xBE];
/* 0x226 */ s16 lifeColorChange;
/* 0x228 */ s16 lifeColorChangeDirection;
/* 0x22A */ s16 unk22A;
/* 0x22C */ s16 unk22C;
/* 0x22E */ s16 unk22E;
/* 0x230 */ s16 unk230;
/* 0x232 */ s16 unk232;
/* 0x234 */ s16 unk234;
/* 0x236 */ s16 unk236;
/* 0x238 */ s16 unk238;
/* 0x23A */ s16 unk23A;
/* 0x23C */ s16 unk23C;
/* 0x23E */ s16 unk23E;
/* 0x240 */ s16 unk240;
/* 0x242 */ s16 unk242;
/* 0x244 */ s16 unk244;
/* 0x246 */ s16 unk246;
/* 0x248 */ s16 unk248;
/* 0x24A */ s16 unk24A;
/* 0x24C */ s16 unk24C;
/* 0x24E */ s16 unk24E;
/* 0x250 */ s16 unk250;
/* 0x252 */ s16 lifeSizeChange;
/* 0x254 */ s16 lifeSizeChangeDirection; // 1 means shrinking, 0 growing
/* 0x256 */ UNK_TYPE1 pad256[0x1A];
/* 0x270 */ s16 lifeAlpha;
/* 0x272 */ UNK_TYPE1 pad272[0xD6];
} InterfaceContext; // size = 0x348

typedef struct {
/* 0x00 */ UNK_TYPE1 unk0;
/* 0x01 */ UNK_TYPE1 unk1;
/* 0x02 */ UNK_TYPE1 unk2;
/* 0x03 */ UNK_TYPE1 unk3;
/* 0x04 */ f32 unk4;
/* 0x08 */ f32 unk8;
/* 0x0C */ f32 unkC;
/* 0x10 */ UNK_TYPE1 unk10;
/* 0x11 */ UNK_TYPE1 unk11;
/* 0x12 */ UNK_TYPE1 unk12;
/* 0x13 */ UNK_TYPE1 unk13;
/* 0x14 */ UNK_TYPE1 unk14;
/* 0x15 */ u8 unk15;
/* 0x16 */ u8 unk16;
/* 0x17 */ u8 unk17;
/* 0x18 */ u8 unk18;
/* 0x19 */ UNK_TYPE1 unk19;
/* 0x1A */ UNK_TYPE1 unk1A;
/* 0x1B */ UNK_TYPE1 unk1B;
/* 0x1C */ UNK_TYPE1 unk1C;
/* 0x1D */ UNK_TYPE1 unk1D;
/* 0x1E */ u8 unk1E;
/* 0x1F */ u8 unk1F;
/* 0x20 */ u8 unk20;
/* 0x21 */ u8 unk21;
/* 0x22 */ u16 unk22;
/* 0x24 */ u16 unk24;
/* 0x26 */ UNK_TYPE1 unk26;
/* 0x27 */ UNK_TYPE1 unk27;
/* 0x28 */ LightInfoDirectional unk28;
/* 0x36 */ LightInfoDirectional unk36;
/* 0x44 */ UNK_TYPE1 unk44;
/* 0x45 */ UNK_TYPE1 unk45;
/* 0x46 */ UNK_TYPE1 unk46;
/* 0x47 */ UNK_TYPE1 unk47;
/* 0x48 */ UNK_TYPE1 unk48;
/* 0x49 */ UNK_TYPE1 unk49;
/* 0x4A */ UNK_TYPE1 unk4A;
/* 0x4B */ UNK_TYPE1 unk4B;
/* 0x4C */ UNK_TYPE1 unk4C;
/* 0x4D */ UNK_TYPE1 unk4D;
/* 0x4E */ UNK_TYPE1 unk4E;
/* 0x4F */ UNK_TYPE1 unk4F;
/* 0x50 */ UNK_TYPE1 unk50;
/* 0x51 */ UNK_TYPE1 unk51;
/* 0x52 */ UNK_TYPE1 unk52;
/* 0x53 */ UNK_TYPE1 unk53;
/* 0x54 */ UNK_TYPE1 unk54;
/* 0x55 */ UNK_TYPE1 unk55;
/* 0x56 */ UNK_TYPE1 unk56;
/* 0x57 */ UNK_TYPE1 unk57;
/* 0x58 */ UNK_TYPE1 unk58;
/* 0x59 */ UNK_TYPE1 unk59;
/* 0x5A */ UNK_TYPE1 unk5A;
/* 0x5B */ UNK_TYPE1 unk5B;
/* 0x5C */ UNK_TYPE1 unk5C;
/* 0x5D */ UNK_TYPE1 unk5D;
/* 0x5E */ UNK_TYPE1 unk5E;
/* 0x5F */ UNK_TYPE1 unk5F;
/* 0x60 */ UNK_TYPE1 unk60;
/* 0x61 */ UNK_TYPE1 unk61;
/* 0x62 */ UNK_TYPE1 unk62;
/* 0x63 */ UNK_TYPE1 unk63;
/* 0x64 */ UNK_TYPE1 unk64;
/* 0x65 */ UNK_TYPE1 unk65;
/* 0x66 */ UNK_TYPE1 unk66;
/* 0x67 */ UNK_TYPE1 unk67;
/* 0x68 */ UNK_TYPE1 unk68;
/* 0x69 */ UNK_TYPE1 unk69;
/* 0x6A */ UNK_TYPE1 unk6A;
/* 0x6B */ UNK_TYPE1 unk6B;
/* 0x6C */ UNK_TYPE1 unk6C;
/* 0x6D */ UNK_TYPE1 unk6D;
/* 0x6E */ UNK_TYPE1 unk6E;
/* 0x6F */ UNK_TYPE1 unk6F;
/* 0x70 */ UNK_TYPE1 unk70;
/* 0x71 */ UNK_TYPE1 unk71;
/* 0x72 */ UNK_TYPE1 unk72;
/* 0x73 */ UNK_TYPE1 unk73;
/* 0x74 */ UNK_TYPE1 unk74;
/* 0x75 */ UNK_TYPE1 unk75;
/* 0x76 */ UNK_TYPE1 unk76;
/* 0x77 */ UNK_TYPE1 unk77;
/* 0x78 */ UNK_TYPE1 unk78;
/* 0x79 */ UNK_TYPE1 unk79;
/* 0x7A */ UNK_TYPE1 unk7A;
/* 0x7B */ UNK_TYPE1 unk7B;
/* 0x7C */ UNK_TYPE1 unk7C;
/* 0x7D */ UNK_TYPE1 unk7D;
/* 0x7E */ UNK_TYPE1 unk7E;
/* 0x7F */ UNK_TYPE1 unk7F;
/* 0x80 */ UNK_TYPE1 unk80;
/* 0x81 */ UNK_TYPE1 unk81;
/* 0x82 */ UNK_TYPE1 unk82;
/* 0x83 */ UNK_TYPE1 unk83;
/* 0x84 */ UNK_TYPE1 unk84;
/* 0x85 */ UNK_TYPE1 unk85;
/* 0x86 */ UNK_TYPE1 unk86;
/* 0x87 */ UNK_TYPE1 unk87;
/* 0x88 */ UNK_TYPE1 unk88;
/* 0x89 */ UNK_TYPE1 unk89;
/* 0x8A */ UNK_TYPE1 unk8A;
/* 0x8B */ UNK_TYPE1 unk8B;
/* 0x8C */ Vec3s unk8C;
/* 0x92 */ Vec3s unk92;
/* 0x98 */ Vec3s unk98;
/* 0x9E */ Vec3s unk9E;
/* 0xA4 */ s16 unkA4;
/* 0xA6 */ s16 unkA6;
/* 0xA8 */ UNK_TYPE1 unkA8;
/* 0xA9 */ UNK_TYPE1 unkA9;
/* 0xAA */ UNK_TYPE1 unkAA;
/* 0xAB */ UNK_TYPE1 unkAB;
/* 0xAC */ s16 windWest;
/* 0xAE */ s16 windVertical;
/* 0xB0 */ s16 windSouth;
/* 0xB2 */ UNK_TYPE1 unkB2;
/* 0xB3 */ UNK_TYPE1 unkB3;
/* 0xB4 */ f32 windClothIntensity;
/* 0xB8 */ u8 environmentSettingsCount;
/* 0xB9 */ UNK_TYPE1 unkB9;
/* 0xBA */ UNK_TYPE1 unkBA;
/* 0xBB */ UNK_TYPE1 unkBB;
/* 0xBC */ void* environmentSettingsList;
/* 0xC0 */ UNK_TYPE1 unkC0;
/* 0xC1 */ u8 unkC1;
/* 0xC2 */ u8 unkC2;
/* 0xC3 */ u8 unkC3;
/* 0xC4 */ RGB unkC4;
/* 0xC7 */ s8 unkC7;
/* 0xC8 */ s8 unkC8;
/* 0xC9 */ s8 unkC9;
/* 0xCA */ RGB unkCA;
/* 0xCD */ s8 unkCD;
/* 0xCE */ s8 unkCE;
/* 0xCF */ s8 unkCF;
/* 0xD0 */ RGB unkD0;
/* 0xD3 */ RGB unkD3;
/* 0xD6 */ s16 unkD6;
/* 0xD8 */ s16 unkD8;
/* 0xDA */ UNK_TYPE1 unkDA;
/* 0xDB */ UNK_TYPE1 unkDB;
/* 0xDC */ f32 unkDC;
/* 0xE0 */ u8 unkE0;
/* 0xE1 */ UNK_TYPE1 unkE1;
/* 0xE2 */ s8 unkE2;
/* 0xE3 */ UNK_TYPE1 unkE3;
/* 0xE4 */ UNK_TYPE1 unkE4;
/* 0xE5 */ UNK_TYPE1 unkE5;
/* 0xE6 */ UNK_TYPE1 unkE6;
/* 0xE7 */ UNK_TYPE1 unkE7;
/* 0xE8 */ UNK_TYPE1 unkE8;
/* 0xE9 */ UNK_TYPE1 unkE9;
/* 0xEA */ UNK_TYPE1 unkEA;
/* 0xEB */ UNK_TYPE1 unkEB;
/* 0xEC */ UNK_TYPE1 unkEC;
/* 0xED */ UNK_TYPE1 unkED;
/* 0xEE */ UNK_TYPE1 unkEE;
/* 0xEF */ UNK_TYPE1 unkEF;
/* 0xF0 */ UNK_TYPE1 unkF0;
/* 0xF1 */ UNK_TYPE1 unkF1;
} KankyoContext; // size = 0xF4

typedef struct {
/* 0x00000 */ View view;
/* 0x00168 */ Font font;
/* 0x0A7E8 */ UNK_TYPE1 padA7E8[0x7708];
/* 0x11EF0 */ u8 unk11EF0;
/* 0x11EF1 */ UNK_TYPE1 pad11EF1[0x13];
/* 0x11F04 */ u16 unk11F04;
/* 0x11F06 */ UNK_TYPE1 pad11F06[0x4];
/* 0x11F0A */ u8 unk11F0A;
/* 0x11F0B */ UNK_TYPE1 pad11F0B[0x17];
/* 0x11F22 */ u8 unk11F22;
/* 0x11F23 */ UNK_TYPE1 pad11F23[0xFD];
/* 0x12020 */ u8 unk12020;
/* 0x12021 */ UNK_TYPE1 pad12021[0x23];
/* 0x12044 */ s16 unk12044;
/* 0x12046 */ UNK_TYPE1 pad12046[0x24];
/* 0x1206A */ s16 unk1206A;
/* 0x1206C */ UNK_TYPE1 pad1206C[0x6C];
} MessageContext; // size = 0x120D8

typedef union {
    RoomMeshType0 type0;
    RoomMeshType1 type1;
    RoomMeshType2 type2;
} RoomMesh; // size = 0xC

// Full save context
typedef struct {
/* 0x0000 */ SaveContextPerm perm;
/* 0x100C */ SaveContextOwl owl;
/* 0x3CA0 */ SaveContextExtra extra;
} SaveContext; // size = 0x48C8

typedef struct {
/* 0x00 */ BgMeshHeader* sceneMesh;
/* 0x04 */ Vec3f sceneMin;
/* 0x10 */ Vec3f sceneMax;
/* 0x1C */ s32 xSubdivisions;
/* 0x20 */ s32 ySubdivisions;
/* 0x24 */ s32 zSubdivisions;
/* 0x28 */ Vec3f subdivisionSize;
/* 0x34 */ Vec3f inverseSubdivisionSize;
/* 0x40 */ BgMeshSubdivision* subdivisions;
/* 0x44 */ BgScenePolygonLists scenePolyLists;
} StaticCollisionContext; // size = 0x50

typedef struct {
/* 0x0 */ ColCommonInit base;
/* 0x8 */ u32 count;
/* 0xC */ ColTriInit* elemInit;
} ColTriGroupInit; // size = 0x10

typedef struct {
/* 0x000 */ EffCommon base;
/* 0x004 */ EffSparkParams params;
} EffSpark; // size = 0x4C8

typedef struct {
/* 0x000 */ EffCommon base;
/* 0x004 */ EffTireMarkParams params;
} EffTireMark; // size = 0x610

typedef struct {
/* 0x00 */ s8 num;
/* 0x01 */ u8 unk1;
/* 0x02 */ u8 unk2;
/* 0x03 */ u8 unk3;
/* 0x04 */ s8 echo;
/* 0x05 */ u8 unk5;
/* 0x06 */ u8 enablePosLights;
/* 0x07 */ UNK_TYPE1 pad7[0x1];
/* 0x08 */ RoomMesh* mesh;
/* 0x0C */ void* segment;
/* 0x10 */ UNK_TYPE1 pad10[0x4];
} Room; // size = 0x14

typedef struct {
/* 0x00 */ Room currRoom;
/* 0x14 */ Room prevRoom;
/* 0x28 */ void* roomMemPages[2]; // In a scene with transitions, roomMemory is split between two pages that toggle each transition. This is one continuous range, as the second page allocates from the end
/* 0x30 */ u8 activeMemPage; // 0 - First page in memory, 1 - Second page
/* 0x31 */ s8 unk31;
/* 0x32 */ UNK_TYPE1 pad32[0x2];
/* 0x34 */ u32 activeRoomVram;
/* 0x38 */ DmaRequest dmaRequest;
/* 0x58 */ OSMesgQueue loadQueue;
/* 0x70 */ OSMesg loadMsg[1];
/* 0x74 */ void* unk74;
/* 0x78 */ s8 unk78;
/* 0x79 */ s8 unk79;
/* 0x7A */ UNK_TYPE2 unk7A[3];
} RoomContext; // size = 0x80

typedef struct ActorBgFuKaiten ActorBgFuKaiten;

typedef struct ActorBgMbarChair ActorBgMbarChair;

typedef struct ActorEnBji01 ActorEnBji01;

typedef struct ActorEnTest ActorEnTest;

typedef struct ActorInit ActorInit;

typedef struct {
/* 0x00 */ u32 vromStart;
/* 0x04 */ u32 vromEnd;
/* 0x08 */ void* vramStart;
/* 0x0C */ void* vramEnd;
/* 0x10 */ void* loadedRamAddr; // original name: "allocp"
/* 0x14 */ ActorInit* initInfo;
/* 0x18 */ char* name;
/* 0x1C */ u16 allocType; // bit 0: don't allocate memory, use actorContext->0x250? bit 1: Always keep loaded?
/* 0x1E */ s8 nbLoaded; // original name: "clients"
/* 0x1F */ UNK_TYPE1 pad1F[0x1];
} ActorOverlay; // size = 0x20

typedef struct ActorListEntry ActorListEntry;

typedef struct ActorMesh ActorMesh;

typedef struct DynaCollisionContext DynaCollisionContext;

typedef struct CollisionContext CollisionContext;

typedef struct ActorPlayer ActorPlayer;

typedef struct ActorShape ActorShape;

typedef struct Arena Arena;

typedef struct ArenaNode ArenaNode;

struct Arena {
/* 0x00 */ ArenaNode* head;
/* 0x04 */ void* start;
/* 0x08 */ OSMesgQueue lock;
/* 0x20 */ u8 unk20;
/* 0x21 */ u8 isInit;
/* 0x22 */ u8 flag;
}; // size = 0x24

struct ArenaNode {
/* 0x0 */ s16 magic; // Should always be 0x7373
/* 0x2 */ s16 isFree;
/* 0x4 */ u32 size;
/* 0x8 */ ArenaNode* next;
/* 0xC */ ArenaNode* prev;
}; // size = 0x10

typedef struct CameraContext CameraContext;

typedef struct ColCommon ColCommon;

typedef struct {
/* 0x000 */ s16 ATgroupLength;
/* 0x002 */ u16 flags; // bit 0: collision bodies can't be added or removed, only swapped out
/* 0x004 */ ColCommon* ATgroup[50];
/* 0x0CC */ s32 ACgroupLength;
/* 0x0D0 */ ColCommon* ACgroup[60];
/* 0x1C0 */ s32 OTgroupLength;
/* 0x1C4 */ ColCommon* OTgroup[50];
/* 0x28C */ s32 group4Length;
/* 0x290 */ ColCommon* group4[3];
} CollisionCheckContext; // size = 0x29C

typedef struct ColBodyInfo ColBodyInfo;

struct ColBodyInfo {
/* 0x00 */ ColTouch toucher;
/* 0x08 */ ColBump bumper;
/* 0x14 */ u8 unk14;
/* 0x15 */ u8 unk15; // bit 0: can be toucher in AT-AC collision
/* 0x16 */ u8 unk16; // bit 0: can be bumper in AT-AC collision
/* 0x17 */ u8 unk17;
/* 0x18 */ ColCommon* unk18;
/* 0x1C */ ColCommon* unk1C;
/* 0x20 */ ColBodyInfo* unk20;
/* 0x24 */ ColBodyInfo* unk24;
}; // size = 0x28

typedef struct {
/* 0x00 */ ColBodyInfo body;
/* 0x28 */ ColSphereParams params;
} ColSphereGroupElement; // size = 0x40

typedef struct {
/* 0x00 */ ColBodyInfo body;
/* 0x28 */ ColTriParams params;
} ColTri; // size = 0x5C

typedef struct ColCylinder ColCylinder;

typedef struct ColQuad ColQuad;

typedef struct ColSphere ColSphere;

typedef struct ColSphereGroup ColSphereGroup;

typedef struct ColTriGroup ColTriGroup;

typedef struct ActorEnBom ActorEnBom;

typedef struct ActorEnFirefly ActorEnFirefly;

typedef struct ActorObjBell ActorObjBell;

typedef struct DaytelopContext DaytelopContext;

typedef struct DynaPolyActor DynaPolyActor;

struct ActorMesh {
/* 0x00 */ DynaPolyActor* actor;
/* 0x04 */ BgMeshHeader* header;
/* 0x08 */ ActorMeshPolyLists polyLists;
/* 0x10 */ s16 verticesStartIndex;
/* 0x12 */ s16 waterboxesStartIndex;
/* 0x14 */ ActorMeshParams prevParams;
/* 0x34 */ ActorMeshParams currParams;
/* 0x54 */ Vec3s averagePos;
/* 0x5A */ s16 radiusFromAveragePos;
/* 0x5C */ f32 minY;
/* 0x60 */ f32 maxY;
}; // size = 0x64

struct DynaCollisionContext {
/* 0x0000 */ u8 unk0;
/* 0x0001 */ UNK_TYPE1 pad1[0x3];
/* 0x0004 */ ActorMesh actorMeshArr[50];
/* 0x138C */ u16 flags[50]; // bit 0 - Is mesh active
/* 0x13F0 */ BgPolygon* polygons;
/* 0x13F4 */ BgVertex* vertices;
/* 0x13F8 */ BgWaterboxList waterboxes;
/* 0x1400 */ BgPolygonLinkedList polygonList;
/* 0x140C */ u32 maxNodes;
/* 0x1410 */ u32 maxPolygons;
/* 0x1414 */ u32 maxVertices;
/* 0x1418 */ u32 maxMemory;
/* 0x141C */ u32 unk141C;
}; // size = 0x1420

struct CollisionContext {
/* 0x0000 */ StaticCollisionContext stat;
/* 0x0050 */ DynaCollisionContext dyna;
}; // size = 0x1470

typedef struct ActorBgIknvObj ActorBgIknvObj;

typedef struct EffFootmark EffFootmark;

typedef struct EffShieldParticle EffShieldParticle;

typedef struct EffShieldParticleParams EffShieldParticleParams;

typedef struct EffTables EffTables;

typedef struct EffectTableInfo EffectTableInfo;

typedef struct FaultAddrConvClient FaultAddrConvClient;

struct FaultAddrConvClient {
/* 0x0 */ FaultAddrConvClient* next;
/* 0x4 */ fault_address_converter_func callback;
/* 0x8 */ void* param;
}; // size = 0xC

typedef struct FaultClient FaultClient;

struct FaultClient {
/* 0x0 */ FaultClient* next;
/* 0x4 */ fault_client_func callback;
/* 0x8 */ void* param0;
/* 0xC */ void* param1;
}; // size = 0x10

typedef struct {
/* 0x000 */ OSThread thread;
/* 0x1B0 */ u8 stack[1536]; // Seems leftover from an earlier version. The thread actually uses a stack of this size at 0x8009BE60
/* 0x7B0 */ OSMesgQueue queue;
/* 0x7C8 */ OSMesg msg[1];
/* 0x7CC */ u8 exitDebugger;
/* 0x7CD */ u8 msgId; // 1 - CPU Break; 2 - Fault; 3 - Unknown
/* 0x7CE */ u8 faultHandlerEnabled;
/* 0x7CF */ u8 faultActive;
/* 0x7D0 */ OSThread* faultedThread;
/* 0x7D4 */ fault_update_input_func padCallback;
/* 0x7D8 */ FaultClient* clients;
/* 0x7DC */ FaultAddrConvClient* addrConvClients;
/* 0x7E0 */ UNK_TYPE1 pad7E0[0x4];
/* 0x7E4 */ Input padInput[4];
/* 0x844 */ void* fb;
} FaultThreadStruct; // size = 0x848

typedef struct FileChooseContext FileChooseContext;

typedef void(*filechoose_update_func)(FileChooseContext* ctxt);

typedef struct FireObj FireObj;

typedef struct FireObjLight FireObjLight;

typedef struct GameAlloc GameAlloc;

typedef struct GameState GameState;

typedef struct OpeningContext OpeningContext;

typedef struct PreNMIContext PreNMIContext;

typedef struct TitleContext TitleContext;

typedef struct GameAllocNode GameAllocNode;

struct GameAllocNode {
/* 0x0 */ GameAllocNode* next;
/* 0x4 */ GameAllocNode* prev;
/* 0x8 */ u32 size;
/* 0xC */ UNK_TYPE1 padC[0x4];
}; // size = 0x10

struct GameAlloc {
/* 0x00 */ GameAllocNode base;
/* 0x10 */ GameAllocNode* head;
}; // size = 0x14

struct GameState {
/* 0x00 */ GraphicsContext* gfxCtx;
/* 0x04 */ func_ptr main;
/* 0x08 */ func_ptr destroy;
/* 0x0C */ func_ptr nextGameStateInit;
/* 0x10 */ u32 nextGameStateSize;
/* 0x14 */ Input input[4];
/* 0x74 */ GameStateHeap heap;
/* 0x84 */ GameAlloc alloc;
/* 0x98 */ UNK_TYPE1 pad98[0x3];
/* 0x9B */ u8 running; // If 0, switch to next game state
/* 0x9C */ u32 frames;
/* 0xA0 */ UNK_TYPE1 padA0[0x2];
/* 0xA2 */ u8 framerateDivisor; // game speed?
/* 0xA3 */ UNK_TYPE1 unkA3;
}; // size = 0xA4

struct OpeningContext {
/* 0x000 */ GameState common;
/* 0x0A4 */ UNK_TYPE1 padA4[0x4];
/* 0x0A8 */ View view;
}; // size = 0x210

struct PreNMIContext {
/* 0x00 */ GameState state;
/* 0xA4 */ u32 timer;
/* 0xA8 */ UNK_TYPE4 unkA8;
}; // size = 0xAC

struct TitleContext {
/* 0x000 */ GameState state;
/* 0x0A4 */ u8* nintendo_logo_data;
/* 0x0A8 */ View view;
/* 0x210 */ SramContext sram;
/* 0x230 */ UNK_TYPE1 pad230[0x8];
/* 0x238 */ s16 unk238;
/* 0x23A */ s16 logoCoverAlpha;
/* 0x23C */ s16 logoCoverAlphaChangePerFrame;
/* 0x23E */ s16 logoFullVisibilityDuration;
/* 0x240 */ s16 frameCounter;
/* 0x242 */ UNK_TYPE2 frameCounterMod0x80;
/* 0x244 */ u8 switchToNextGameState;
/* 0x245 */ UNK_TYPE1 pad245[0x3];
}; // size = 0x248

struct DaytelopContext {
/* 0x000 */ GameState common;
/* 0x0A4 */ UNK_TYPE1 padA4[0xC];
/* 0x0B0 */ View view;
/* 0x218 */ UNK_TYPE1 pad218[0x28];
/* 0x240 */ s16 transitionCountdown;
/* 0x242 */ s16 unk242;
/* 0x244 */ s16 unk244;
/* 0x246 */ UNK_TYPE1 pad246[0x2];
}; // size = 0x248

struct FileChooseContext {
/* 0x00000 */ GameState common;
/* 0x000A4 */ UNK_TYPE1 padA4[0x14];
/* 0x000B8 */ View view;
/* 0x00220 */ SramContext sram;
/* 0x00240 */ UNK_TYPE1 pad240[0x12310];
/* 0x12550 */ Font unk12550;
/* 0x1CBD0 */ UNK_TYPE1 pad1CBD0[0x78B0];
/* 0x24480 */ s16 unk24480;
/* 0x24482 */ UNK_TYPE1 pad24482[0x2];
/* 0x24484 */ s16 unk24484;
/* 0x24486 */ s16 unk24486;
/* 0x24488 */ UNK_TYPE1 pad24488[0x4];
/* 0x2448C */ s16 unk2448C;
/* 0x2448E */ UNK_TYPE1 pad2448E[0x1A];
/* 0x244A8 */ s16 unk244A8;
/* 0x244AA */ UNK_TYPE1 pad244AA[0x2];
/* 0x244AC */ s16 unk244AC;
/* 0x244AE */ s16 unk244AE;
/* 0x244B0 */ s16 unk244B0;
/* 0x244B2 */ s16 unk244B2;
/* 0x244B4 */ s16 unk244B4;
/* 0x244B6 */ s16 unk244B6;
/* 0x244B8 */ s16 unk244B8;
/* 0x244BA */ s16 unk244BA;
/* 0x244BC */ UNK_TYPE1 pad244BC[0x18];
/* 0x244D4 */ s16 unk244D4;
/* 0x244D6 */ UNK_TYPE1 pad244D6[0x4];
/* 0x244DA */ s16 unk244DA;
/* 0x244DC */ UNK_TYPE1 pad244DC[0xA];
/* 0x244E6 */ s16 unk244E6;
/* 0x244E8 */ UNK_TYPE1 pad244E8[0x8];
/* 0x244F0 */ s16 unk244F0;
/* 0x244F2 */ s16 unk244F2;
/* 0x244F4 */ UNK_TYPE1 pad244F4[0x6];
/* 0x244FA */ s16 inputXChangeCooldown;
/* 0x244FC */ s16 inputYChangeCooldown;
/* 0x244FE */ s16 inputXDir;
/* 0x24500 */ s16 inputYDir;
/* 0x24502 */ s16 inputX;
/* 0x24504 */ s16 inputY;
/* 0x24506 */ UNK_TYPE1 pad24506[0x2];
/* 0x24508 */ s16 unk24508;
/* 0x2450A */ s16 unk2450A;
/* 0x2450C */ UNK_TYPE1 pad2450C[0x1C];
/* 0x24528 */ s16 unk24528;
/* 0x2452A */ UNK_TYPE1 pad2452A[0x2E];
}; // size = 0x24558

typedef struct IrqMgr IrqMgr;

typedef struct AudioThreadStruct AudioThreadStruct;

typedef struct LightingContext LightingContext;

typedef struct GlobalContext GlobalContext;

typedef struct {
/* 0x0 */ GlobalContext* ctxt;
/* 0x4 */ s32 type; // bitfield, highest set bit determines type
/* 0x8 */ s16 countdown;
/* 0xA */ s16 state; // 0 - stopped, 1 - active, 2 - setup
} Quake2Context; // size = 0xC

typedef s32(*collision_add_func)(GlobalContext*, ColCommon*);

typedef void(*collision_func)(GlobalContext*, CollisionCheckContext*, ColCommon*, ColCommon*);

typedef void(*cutscene_update_func)(GlobalContext* ctxt, CutsceneContext* cCtxt);

typedef void(*draw_func)(GlobalContext* ctxt, s16 index);

typedef void(*global_context_func)(GlobalContext*);

typedef void(*light_map_positional_func)(LightMapper* mapper, void* params, GlobalContext* ctxt);

typedef void(*room_draw_func)(GlobalContext* ctxt, Room* room, u32 flags);

typedef struct {
/* 0x00 */ draw_func unk0;
/* 0x04 */ u32 unk4;
/* 0x08 */ u32 unk8;
/* 0x0C */ u32 unkC;
/* 0x10 */ u32 unk10;
/* 0x14 */ u32 unk14;
/* 0x18 */ u32 unk18;
/* 0x1C */ u32 unk1C;
/* 0x20 */ u32 unk20;
} s801BB170; // size = 0x24

typedef void(*scene_header_func)(GlobalContext* ctxt, SceneCmd* entry);

typedef void(*scene_proc_draw_func)(GlobalContext* ctxt, u32 segment, void* params);

typedef struct Camera Camera;

typedef struct {
/* 0x00 */ s16 randIdx;
/* 0x02 */ s16 countdownMax;
/* 0x04 */ Camera* cam;
/* 0x08 */ u32 callbackIdx;
/* 0x0C */ s16 y;
/* 0x0E */ s16 x;
/* 0x10 */ s16 zoom;
/* 0x12 */ s16 rotZ;
/* 0x14 */ QuakeRequest14 unk14;
/* 0x1A */ s16 speed;
/* 0x1C */ s16 unk1C;
/* 0x1E */ s16 countdown;
/* 0x20 */ s16 camPtrIdx;
/* 0x22 */ UNK_TYPE1 pad22[0x2];
} QuakeRequest; // size = 0x24

typedef s32(*camera_update_func)(Camera* camera);

typedef s16(*quake_callback_func)(QuakeRequest* req, ShakeInfo* shake);

typedef struct LightsList LightsList;

typedef struct LoadedParticleEntry LoadedParticleEntry;

struct EffectTableInfo {
/* 0x0 */ LoadedParticleEntry* data_table; // Name from debug assert
/* 0x4 */ s32 searchIndex;
/* 0x8 */ s32 size;
}; // size = 0xC

typedef void(*effect_func)(GlobalContext* ctxt, u32 index, LoadedParticleEntry* particle);

typedef void(*effect_init_func)(GlobalContext* ctxt, u32 index, LoadedParticleEntry* particle, void* init);

struct LoadedParticleEntry {
/* 0x00 */ Vec3f position;
/* 0x0C */ Vec3f velocity;
/* 0x18 */ Vec3f acceleration;
/* 0x24 */ effect_func update;
/* 0x28 */ effect_func draw;
/* 0x2C */ Vec3f unk2C;
/* 0x38 */ u32 displayList;
/* 0x3C */ UNK_TYPE4 unk3C;
/* 0x40 */ s16 regs[13]; // These are particle-specific
/* 0x5A */ u16 flags; // bit 0: set if this entry is not considered free on a priority tie bit 1: ? bit 2: ?
/* 0x5C */ s16 life; // -1 means this entry is free
/* 0x5E */ u8 priority; // Lower number mean higher priority
/* 0x5F */ u8 type;
}; // size = 0x60

typedef struct {
/* 0x0 */ UNK_TYPE4 unk0;
/* 0x4 */ effect_init_func init;
} ParticleOverlayInfo; // size = 0x8

typedef struct {
/* 0x00 */ u32 vromStart;
/* 0x04 */ u32 vromEnd;
/* 0x08 */ void* vramStart;
/* 0x0C */ void* vramEnd;
/* 0x10 */ void* loadedRamAddr;
/* 0x14 */ ParticleOverlayInfo* overlayInfo;
/* 0x18 */ u32 unk18; // Always 0x01000000?
} ParticleOverlay; // size = 0x1C

typedef struct OSMesgQueueListNode OSMesgQueueListNode;

struct IrqMgr {
/* 0x000 */ OSScMsg verticalRetraceMesg;
/* 0x020 */ OSScMsg prenmiMsg;
/* 0x040 */ OSScMsg nmiMsg;
/* 0x060 */ OSMesgQueue irqQueue;
/* 0x078 */ OSMesg irqBuffer[8];
/* 0x098 */ OSThread thread;
/* 0x248 */ OSMesgQueueListNode* callbacks;
/* 0x24C */ u8 prenmiStage;
/* 0x250 */ OSTime lastPrenmiTime;
/* 0x258 */ OSTimer prenmiTimer;
/* 0x278 */ OSTime lastFrameTime;
}; // size = 0x280

struct OSMesgQueueListNode {
/* 0x0 */ OSMesgQueueListNode* next;
/* 0x4 */ OSMesgQueue* queue;
}; // size = 0x8

typedef struct {
/* 0x000 */ u8 controllers; // bit 0 is set if controller 1 is plugged in, etc.
/* 0x001 */ UNK_TYPE1 pad1[0x13];
/* 0x014 */ OSContStatus statuses[4];
/* 0x024 */ UNK_TYPE4 unk24;
/* 0x028 */ OSMesg lockMesg[1];
/* 0x02C */ OSMesg interrupts[8];
/* 0x04C */ OSMesgQueue siEventCallbackQueue;
/* 0x064 */ OSMesgQueue lock;
/* 0x07C */ OSMesgQueue irqmgrCallbackQueue;
/* 0x094 */ OSMesgQueueListNode irqmgrCallbackQueueNode;
/* 0x09C */ IrqMgr* irqmgr;
/* 0x0A0 */ OSThread thread;
/* 0x250 */ Input input[4];
/* 0x2B0 */ OSContPad controllerState1[4];
/* 0x2C8 */ u8 maxNumControllers;
/* 0x2C9 */ UNK_TYPE1 pad2C9[0x1B3];
/* 0x47C */ u8 unk47C;
/* 0x47D */ u8 unk47D;
/* 0x47E */ u8 hasStopped;
/* 0x47F */ UNK_TYPE1 pad47F[0x1];
} PadmgrThreadStruct; // size = 0x480

typedef struct {
/* 0x000 */ OSMesgQueue unk0;
/* 0x018 */ UNK_TYPE4 unk18[64];
/* 0x118 */ OSMesgQueue unk118;
/* 0x130 */ UNK_TYPE4 unk130[8];
/* 0x150 */ OSThread thread;
/* 0x300 */ UNK_TYPE4 unk300;
/* 0x304 */ UNK_TYPE4 unk304;
/* 0x308 */ UNK_TYPE4 unk308;
/* 0x30C */ UNK_TYPE4 unk30C;
/* 0x310 */ UNK_TYPE4 unk310;
/* 0x314 */ UNK_TYPE4 unk314;
/* 0x318 */ s32 unk318;
/* 0x31C */ UNK_TYPE1 pad31C[0x4];
/* 0x320 */ UNK_TYPE4 unk320;
/* 0x324 */ UNK_TYPE4 unk324;
/* 0x328 */ UNK_TYPE1 pad328[0x7];
/* 0x32F */ s8 unk32F;
/* 0x330 */ OSMesgQueueListNode unk330;
} SchedThreadStruct; // size = 0x338

struct AudioThreadStruct {
/* 0x000 */ IrqMgr* irqmgr;
/* 0x004 */ SchedThreadStruct* sched;
/* 0x008 */ UNK_TYPE1 pad8[0x58];
/* 0x060 */ UNK_TYPE4 unk60;
/* 0x064 */ OSMesgQueue irqQueue;
/* 0x07C */ OSMesg irqBuffer[30];
/* 0x0F4 */ OSMesgQueue unkF4;
/* 0x10C */ UNK_TYPE4 unk10C;
/* 0x110 */ OSMesgQueue initDoneCallback;
/* 0x128 */ OSMesg initDoneCallbackMsgBuffer[1];
/* 0x12C */ UNK_TYPE1 pad12C[0x4];
/* 0x130 */ OSThread thread;
}; // size = 0x2E0

typedef struct StackEntry StackEntry;

struct StackEntry {
/* 0x00 */ StackEntry* next;
/* 0x04 */ StackEntry* prev;
/* 0x08 */ u32 head;
/* 0x0C */ u32 tail;
/* 0x10 */ u32 initValue;
/* 0x14 */ s32 minSpace;
/* 0x18 */ const char* name;
}; // size = 0x1C

typedef struct TargetContext TargetContext;

typedef struct ActorContext ActorContext;

typedef struct s800B948C s800B948C;

typedef struct z_Light z_Light;

struct EffShieldParticleParams {
/* 0x000 */ EffShieldParticleParticle particles[16];
/* 0x180 */ u8 numParticles;
/* 0x181 */ UNK_TYPE1 pad181[0x1];
/* 0x182 */ Vec3s position;
/* 0x188 */ ColorRGBA8 primColorStart;
/* 0x18C */ ColorRGBA8 envColorStart;
/* 0x190 */ ColorRGBA8 primColorMid;
/* 0x194 */ ColorRGBA8 envColorMid;
/* 0x198 */ ColorRGBA8 primColorEnd;
/* 0x19C */ ColorRGBA8 envColorEnd;
/* 0x1A0 */ f32 acceleration;
/* 0x1A4 */ UNK_TYPE1 pad1A4[0x4];
/* 0x1A8 */ f32 maxInitialSpeed;
/* 0x1AC */ f32 lengthCutoff;
/* 0x1B0 */ u8 duration;
/* 0x1B1 */ u8 age;
/* 0x1B2 */ LightInfo lightInfo;
/* 0x1C0 */ z_Light* light;
/* 0x1C4 */ s32 hasLight;
}; // size = 0x1C8

struct FireObjLight {
/* 0x00 */ z_Light* light;
/* 0x04 */ LightInfoPositional lightInfo;
/* 0x12 */ u8 unk12;
}; // size = 0x13

struct LightingContext {
/* 0x0 */ z_Light* lightsHead;
/* 0x4 */ u8 ambientRed;
/* 0x5 */ u8 ambientGreen;
/* 0x6 */ u8 ambientBlue;
/* 0x7 */ u8 unk7;
/* 0x8 */ u8 unk8;
/* 0x9 */ u8 unk9;
/* 0xA */ s16 unkA;
/* 0xC */ s16 unkC;
}; // size = 0x10

struct z_Light {
/* 0x0 */ LightInfo* info;
/* 0x4 */ z_Light* prev;
/* 0x8 */ z_Light* next;
}; // size = 0xC

struct EffShieldParticle {
/* 0x000 */ EffCommon base;
/* 0x004 */ EffShieldParticleParams params;
}; // size = 0x1CC

struct EffTables {
/* 0x0000 */ GlobalContext* ctxt;
/* 0x0004 */ EffSpark sparks[3];
/* 0x0E5C */ EffBlure blures[25];
/* 0x388C */ EffShieldParticle shieldParticles[3];
/* 0x3DF0 */ EffTireMark tireMarks[15];
}; // size = 0x98E0

struct LightsList {
/* 0x000 */ int numOccupied;
/* 0x004 */ int nextFree;
/* 0x008 */ z_Light lights[32];
}; // size = 0x188

typedef struct Actor Actor;

struct ActorListEntry {
/* 0x0 */ s32 length; // number of actors loaded of this type
/* 0x4 */ Actor* first; // pointer to first actor of this type
/* 0x8 */ UNK_TYPE1 pad8[0x4];
}; // size = 0xC

struct Camera {
/* 0x000 */ UNK_TYPE1 pad0[0x4];
/* 0x004 */ Vec3f unk4;
/* 0x010 */ UNK_TYPE1 pad10[0x8];
/* 0x018 */ f32 unk18;
/* 0x01C */ s16 unk1C;
/* 0x01E */ s16 unk1E;
/* 0x020 */ Vec3f unk20;
/* 0x02C */ UNK_TYPE1 pad2C[0x2];
/* 0x02E */ s16 unk2E;
/* 0x030 */ UNK_TYPE1 pad30[0x10];
/* 0x040 */ s16 unk40;
/* 0x042 */ s16 unk42;
/* 0x044 */ UNK_TYPE1 pad44[0x8];
/* 0x04C */ s16 unk4C;
/* 0x04E */ UNK_TYPE1 pad4E[0x2];
/* 0x050 */ Vec3f focalPoint;
/* 0x05C */ Vec3f eye;
/* 0x068 */ Vec3f upDir;
/* 0x074 */ Vec3f unk74;
/* 0x080 */ f32 unk80;
/* 0x084 */ f32 unk84;
/* 0x088 */ f32 unk88;
/* 0x08C */ GlobalContext* ctxt;
/* 0x090 */ ActorPlayer* player;
/* 0x094 */ PosRot unk94;
/* 0x0A8 */ Actor* unkA8;
/* 0x0AC */ Vec3f unkAC;
/* 0x0B8 */ UNK_TYPE1 padB8[0x8];
/* 0x0C0 */ f32 unkC0;
/* 0x0C4 */ f32 unkC4;
/* 0x0C8 */ f32 unkC8;
/* 0x0CC */ f32 unkCC;
/* 0x0D0 */ f32 unkD0;
/* 0x0D4 */ f32 unkD4;
/* 0x0D8 */ UNK_TYPE1 padD8[0x4];
/* 0x0DC */ f32 unkDC;
/* 0x0E0 */ f32 unkE0;
/* 0x0E4 */ UNK_TYPE1 padE4[0x18];
/* 0x0FC */ f32 fov;
/* 0x100 */ f32 unk100;
/* 0x104 */ UNK_TYPE1 pad104[0x30];
/* 0x134 */ Vec3s unk134;
/* 0x13A */ UNK_TYPE1 pad13A[0x4];
/* 0x13E */ u16 unk13E;
/* 0x140 */ s16 unk140;
/* 0x142 */ s16 state;
/* 0x144 */ s16 mode;
/* 0x146 */ UNK_TYPE1 pad146[0x2];
/* 0x148 */ s16 unk148;
/* 0x14A */ s16 unk14A;
/* 0x14C */ s16 unk14C;
/* 0x14E */ UNK_TYPE1 pad14E[0x6];
/* 0x154 */ s16 unk154;
/* 0x156 */ UNK_TYPE1 pad156[0x4];
/* 0x15A */ s16 unk15A;
/* 0x15C */ s16 unk15C;
/* 0x15E */ s16 unk15E;
/* 0x160 */ UNK_TYPE1 pad160[0x4];
/* 0x164 */ s16 unk164;
/* 0x166 */ s16 unk166;
/* 0x168 */ UNK_TYPE1 pad168[0x10];
}; // size = 0x178

struct CameraContext {
/* 0x000 */ Camera activeCameras[4];
/* 0x5E0 */ Camera* activeCameraPtrs[4];
/* 0x5F0 */ s16 activeCamera;
/* 0x5F2 */ s16 unk5F2;
}; // size = 0x5F4

struct ColCommon {
/* 0x00 */ Actor* actor;
/* 0x04 */ Actor* collisionAT;
/* 0x08 */ Actor* collisionAC;
/* 0x0C */ Actor* collisionOT;
/* 0x10 */ u8 flagsAT;
/* 0x11 */ u8 flagsAC; // bit 1 - collision occured?
/* 0x12 */ u8 unk12;
/* 0x13 */ u8 unk13;
/* 0x14 */ u8 unk14;
/* 0x15 */ u8 type;
/* 0x16 */ UNK_TYPE1 pad16[0x2];
}; // size = 0x18

struct ColCylinder {
/* 0x00 */ ColCommon base;
/* 0x18 */ ColBodyInfo body;
/* 0x40 */ ColCylinderParams params;
}; // size = 0x4C

struct ColQuad {
/* 0x00 */ ColCommon base;
/* 0x18 */ ColBodyInfo body;
/* 0x40 */ ColQuadParams params;
}; // size = 0x80

struct ColSphere {
/* 0x00 */ ColCommon base;
/* 0x18 */ ColBodyInfo body;
/* 0x40 */ ColSphereParams params;
}; // size = 0x58

struct ColSphereGroup {
/* 0x00 */ ColCommon base;
/* 0x18 */ u32 count;
/* 0x1C */ ColSphereGroupElement* spheres;
}; // size = 0x20

struct ColTriGroup {
/* 0x00 */ ColCommon base;
/* 0x18 */ u32 count;
/* 0x1C */ ColTri* tris;
}; // size = 0x20

struct EffFootmark {
/* 0x00 */ z_Matrix displayMatrix;
/* 0x40 */ Actor* actor;
/* 0x44 */ Vec3f location;
/* 0x50 */ u8 flags; // bit 0 - footmark fades out
/* 0x51 */ u8 id;
/* 0x52 */ u8 red;
/* 0x53 */ u8 blue;
/* 0x54 */ u8 green;
/* 0x55 */ UNK_TYPE1 pad55[0x1];
/* 0x56 */ u16 alpha;
/* 0x58 */ u16 alphaChange;
/* 0x5A */ u16 size;
/* 0x5C */ u16 fadeoutDelay;
/* 0x5E */ u16 age;
}; // size = 0x60

struct FireObj {
/* 0x00 */ Vec3f position;
/* 0x0C */ f32 size;
/* 0x10 */ f32 sizeInv;
/* 0x14 */ f32 xScale;
/* 0x18 */ f32 yScale;
/* 0x1C */ f32 dynamicSize;
/* 0x20 */ f32 dynamicSizeStep;
/* 0x24 */ u8 state; // 0 - growing, 1 - shrinking, 2 - fully lit, 3 - not lit
/* 0x25 */ u8 sizeGrowsCos2;
/* 0x26 */ u8 unk26;
/* 0x27 */ u8 unk27;
/* 0x28 */ u8 flags; // bit 0 - ?, bit 1 - ?
/* 0x29 */ UNK_TYPE1 pad29[0x1];
/* 0x2A */ s16 ignitionDelay;
/* 0x2C */ ColCylinder collision;
/* 0x78 */ FireObjLight light;
}; // size = 0x8B

struct TargetContext {
/* 0x00 */ Vec3f unk0;
/* 0x0C */ Vec3f unkC;
/* 0x18 */ f32 unk18;
/* 0x1C */ f32 unk1C;
/* 0x20 */ f32 unk20;
/* 0x24 */ f32 unk24;
/* 0x28 */ f32 unk28;
/* 0x2C */ f32 unk2C;
/* 0x30 */ f32 unk30;
/* 0x34 */ f32 unk34;
/* 0x38 */ Actor* unk38;
/* 0x3C */ Actor* unk3C;
/* 0x40 */ f32 unk40;
/* 0x44 */ f32 unk44;
/* 0x48 */ s16 unk48;
/* 0x4A */ u8 unk4A;
/* 0x4B */ u8 unk4B;
/* 0x4C */ s8 unk4C;
/* 0x4D */ UNK_TYPE1 pad4D[0x3];
/* 0x50 */ TargetContextEntry unk50[3];
/* 0x8C */ Actor* unk8C;
/* 0x90 */ Actor* unk90;
/* 0x94 */ UNK_TYPE1 pad94[0x4];
}; // size = 0x98

typedef void(*actor_func)(Actor* this, GlobalContext* ctxt);

typedef void(*actor_shadow_draw_func)(Actor* actor, LightMapper* mapper, GlobalContext* ctxt);

struct s800B948C {
/* 0x00 */ GlobalContext* ctxt;
/* 0x04 */ Actor* actor;
/* 0x08 */ u32 updateActorIfSet;
/* 0x0C */ u32 unkC;
/* 0x10 */ Actor* unk10;
/* 0x14 */ ActorPlayer* player;
/* 0x18 */ u32 runMainIfSet; // Bitmask of actor flags. The actor will only have main called if it has at least 1 flag set that matches this bitmask
}; // size = 0x1C

struct ActorContext {
/* 0x000 */ UNK_TYPE1 pad0[0x2];
/* 0x002 */ u8 unk2;
/* 0x003 */ u8 unk3;
/* 0x004 */ s8 unk4;
/* 0x005 */ u8 unk5;
/* 0x006 */ UNK_TYPE1 pad6[0x5];
/* 0x00B */ s8 unkB;
/* 0x00C */ s16 unkC;
/* 0x00E */ u8 totalLoadedActors;
/* 0x00F */ u8 undrawnActorCount;
/* 0x010 */ ActorListEntry actorList[12];
/* 0x0A0 */ Actor* undrawnActors[32]; // Records the first 32 actors drawn each frame
/* 0x120 */ TargetContext targetContext;
/* 0x1B8 */ u32 switchFlags[4]; // First 0x40 are permanent, second 0x40 are temporary
/* 0x1C8 */ u32 chestFlags;
/* 0x1CC */ u32 clearedRooms;
/* 0x1D0 */ u32 clearedRoomsTemp;
/* 0x1D4 */ u32 collectibleFlags[4]; // bitfield of 128 bits
/* 0x1E4 */ TitleCardContext titleCtxt;
/* 0x1F4 */ u8 unk1F4;
/* 0x1F5 */ u8 unk1F5;
/* 0x1F6 */ UNK_TYPE1 pad1F6[0x2];
/* 0x1F8 */ f32 unk1F8;
/* 0x1FC */ Vec3f unk1FC;
/* 0x208 */ UNK_TYPE1 pad208[0x48];
/* 0x250 */ void* unk250; // allocation of 0x20f0 bytes?
/* 0x254 */ UNK_TYPE1 pad254[0x14];
/* 0x268 */ u8 unk268;
/* 0x269 */ UNK_TYPE1 pad269[0x1B];
}; // size = 0x284

struct ActorInit {
/* 0x00 */ s16 id;
/* 0x02 */ u8 type;
/* 0x03 */ u8 room;
/* 0x04 */ u32 flags;
/* 0x08 */ s16 objectId;
/* 0x0C */ u32 instanceSize;
/* 0x10 */ actor_func init;
/* 0x14 */ actor_func destroy;
/* 0x18 */ actor_func update;
/* 0x1C */ actor_func draw;
}; // size = 0x20

struct ActorShape {
/* 0x00 */ Vec3s rot;
/* 0x08 */ f32 yDisplacement;
/* 0x0C */ actor_shadow_draw_func shadowDrawFunc;
/* 0x10 */ f32 scale;
/* 0x14 */ u8 alphaScale; // 255 means always draw full opacity if visible
}; // size = 0x18

struct GlobalContext {
/* 0x00000 */ GameState state;
/* 0x000A4 */ s16 sceneNum;
/* 0x000A6 */ u8 sceneConfig; // TODO: This at least controls the behavior of animated textures. Does it do more?
/* 0x000A7 */ UNK_TYPE1 padA7[0x9];
/* 0x000B0 */ SceneCmd* currentSceneVram;
/* 0x000B4 */ UNK_TYPE1 padB4[0x4];
/* 0x000B8 */ View view;
/* 0x00220 */ CameraContext cameraCtx;
/* 0x00814 */ u8 unk814;
/* 0x00815 */ u8 unk815;
/* 0x00816 */ UNK_TYPE1 pad816[0x2];
/* 0x00818 */ LightingContext lightCtx;
/* 0x00828 */ u32 unk828;
/* 0x0082C */ UNK_TYPE1 pad82C[0x4];
/* 0x00830 */ CollisionContext colCtx;
/* 0x01CA0 */ ActorContext actorCtx;
/* 0x01F24 */ CutsceneContext csCtx;
/* 0x01F74 */ CutsceneEntry* cutsceneList;
/* 0x01F78 */ GlobalContext1F78 unk1F78[16];
/* 0x02138 */ EffFootmark footmarks[100];
/* 0x046B8 */ SramContext sram;
/* 0x046D8 */ UNK_TYPE1 pad46D8[0x230];
/* 0x04908 */ MessageContext msgCtx;
/* 0x169E0 */ UNK_TYPE1 pad169E0[0x8];
/* 0x169E8 */ InterfaceContext interfaceCtx;
/* 0x16D30 */ GlobalContext16D30 unk16D30;
/* 0x17000 */ u16 unk17000;
/* 0x17002 */ UNK_TYPE1 pad17002[0x2];
/* 0x17004 */ KankyoContext kankyoContext;
/* 0x170F8 */ UNK_TYPE1 pad170F8[0xC90];
/* 0x17D88 */ SceneContext sceneContext;
/* 0x186E0 */ RoomContext roomContext;
/* 0x18760 */ u8 transitionActorCount;
/* 0x18761 */ UNK_TYPE1 pad18761[0x3];
/* 0x18764 */ TransitionActorInit* transitionActorList;
/* 0x18768 */ UNK_TYPE1 pad18768[0x48];
/* 0x187B0 */ z_Matrix unk187B0;
/* 0x187F0 */ UNK_TYPE1 pad187F0[0xC];
/* 0x187FC */ z_Matrix unk187FC;
/* 0x1883C */ UNK_TYPE1 pad1883C[0x4];
/* 0x18840 */ u32 unk18840;
/* 0x18844 */ u8 unk18844;
/* 0x18845 */ u8 unk18845;
/* 0x18846 */ u16 sceneNumActorsToLoad;
/* 0x18848 */ u8 numRooms;
/* 0x18849 */ UNK_TYPE1 pad18849[0x3];
/* 0x1884C */ RoomFileLocation* roomList;
/* 0x18850 */ ActorEntry* linkActorEntry;
/* 0x18854 */ ActorEntry* setupActorList;
/* 0x18858 */ UNK_PTR unk18858;
/* 0x1885C */ EntranceEntry* setupEntranceList;
/* 0x18860 */ void* setupExitList;
/* 0x18864 */ void* setupPathList;
/* 0x18868 */ UNK_PTR unk18868;
/* 0x1886C */ AnimatedTexture* sceneTextureAnimations;
/* 0x18870 */ UNK_TYPE1 pad18870[0x4];
/* 0x18874 */ u8 unk18874;
/* 0x18875 */ s8 unk18875;
/* 0x18876 */ UNK_TYPE1 pad18876[0x4];
/* 0x1887A */ u16 unk1887A;
/* 0x1887C */ s8 unk1887C;
/* 0x1887D */ UNK_TYPE1 pad1887D[0x7];
/* 0x18884 */ CollisionCheckContext colCheckCtx;
/* 0x18B20 */ UNK_TYPE1 pad18B20[0x28];
/* 0x18B48 */ u8 curSpawn;
/* 0x18B49 */ UNK_TYPE1 pad18B49[0x1];
/* 0x18B4A */ u8 unk18B4A;
/* 0x18B4B */ UNK_TYPE1 pad18B4B[0x309];
/* 0x18E54 */ SceneTableEntry* currentSceneTableEntry;
/* 0x18E58 */ UNK_TYPE1 pad18E58[0x400];
}; // size = 0x19258

struct Actor {
/* 0x000 */ s16 id;
/* 0x002 */ u8 type;
/* 0x003 */ s8 room;
/* 0x004 */ u32 flags; // bit 20: is playing cutscene; bit 22: disable positional lights if bit 28 is not set; bit 28: enable positional lights on actor
/* 0x008 */ PosRot initPosRot;
/* 0x01C */ s16 params;
/* 0x01E */ s8 objBankIndex;
/* 0x01F */ UNK_TYPE1 unk1F;
/* 0x020 */ u16 unk20;
/* 0x022 */ u16 unk22;
/* 0x024 */ PosRot currPosRot;
/* 0x038 */ s8 cutscene;
/* 0x039 */ u8 unk39;
/* 0x03A */ UNK_TYPE1 pad3A[0x2];
/* 0x03C */ PosRot topPosRot;
/* 0x050 */ u16 unk50;
/* 0x052 */ UNK_TYPE1 pad52[0x2];
/* 0x054 */ f32 unk54;
/* 0x058 */ Vec3f scale;
/* 0x064 */ Vec3f velocity;
/* 0x070 */ f32 speedXZ;
/* 0x074 */ f32 gravity;
/* 0x078 */ f32 minVelocityY;
/* 0x07C */ BgPolygon* wallPoly;
/* 0x080 */ BgPolygon* floorPoly;
/* 0x084 */ u8 wallPolySource;
/* 0x085 */ u8 floorPolySource;
/* 0x086 */ UNK_TYPE1 pad86[0x2];
/* 0x088 */ f32 unk88;
/* 0x08C */ f32 unk8C;
/* 0x090 */ u16 unk90;
/* 0x092 */ s16 rotTowardsLinkY;
/* 0x094 */ f32 sqrdDistanceFromLink;
/* 0x098 */ f32 xzDistanceFromLink;
/* 0x09C */ f32 yDistanceFromLink;
/* 0x0A0 */ ActorA0 unkA0;
/* 0x0BC */ ActorShape shape;
/* 0x0D4 */ UNK_TYPE1 padD4[0x18];
/* 0x0EC */ Vec3f unkEC;
/* 0x0F8 */ f32 unkF8;
/* 0x0FC */ f32 unkFC;
/* 0x100 */ f32 unk100;
/* 0x104 */ f32 unk104;
/* 0x108 */ Vec3f lastPos;
/* 0x114 */ u8 unk114;
/* 0x115 */ u8 unk115;
/* 0x116 */ u16 textId;
/* 0x118 */ u16 freeze;
/* 0x11A */ u16 hitEffectParams; // TODO make into bitfield
/* 0x11C */ u8 hitEffectIntensity;
/* 0x11D */ u8 hasBeenDrawn;
/* 0x11E */ UNK_TYPE1 pad11E[0x1];
/* 0x11F */ u8 naviEnemyId;
/* 0x120 */ Actor* parent;
/* 0x124 */ Actor* child;
/* 0x128 */ Actor* prev;
/* 0x12C */ Actor* next;
/* 0x130 */ actor_func init;
/* 0x134 */ actor_func destroy;
/* 0x138 */ actor_func update;
/* 0x13C */ actor_func draw;
/* 0x140 */ ActorOverlay* overlayEntry;
}; // size = 0x144

typedef struct {
/* 0x000 */ Actor base;
/* 0x144 */ ColQuad unk144;
/* 0x1C4 */ ColQuad unk1C4;
/* 0x244 */ Vec3f unk244;
/* 0x250 */ f32 unk250;
/* 0x254 */ f32 unk254;
/* 0x258 */ actor_func update;
/* 0x25C */ s16 unk25C;
/* 0x25E */ u16 unk25E;
/* 0x260 */ u8 unk260;
/* 0x261 */ UNK_TYPE1 pad261[0x3];
} ActorArrowFire; // size = 0x264

typedef struct {
/* 0x000 */ Actor base;
/* 0x144 */ ColCylinder collision;
/* 0x190 */ AnimatedTexture* animatedTextures;
/* 0x194 */ actor_func update;
} ActorBgIkanaRay; // size = 0x198

struct ActorBgMbarChair {
/* 0x000 */ Actor base;
/* 0x144 */ UNK_TYPE1 pad144[0x18];
}; // size = 0x15C

typedef struct {
/* 0x000 */ Actor base;
/* 0x144 */ actor_func update;
/* 0x148 */ ColCylinder collision;
/* 0x194 */ UNK_TYPE1 pad194[0x14];
} ActorEnAObj; // size = 0x1A8

struct ActorEnBji01 {
/* 0x000 */ Actor base;
/* 0x144 */ UNK_TYPE1 pad144[0x170];
}; // size = 0x2B4

struct ActorEnBom {
/* 0x000 */ Actor base;
/* 0x144 */ ColCylinder unk144;
/* 0x190 */ ColSphereGroup unk190;
/* 0x1B0 */ ColSphereGroupElement unk1B0[1];
/* 0x1F0 */ s16 unk1F0;
/* 0x1F2 */ UNK_TYPE1 pad1F2[0x6];
/* 0x1F8 */ u8 unk1F8;
/* 0x1F9 */ u8 unk1F9;
/* 0x1FA */ UNK_TYPE1 pad1FA[0x2];
/* 0x1FC */ u8 unk1FC;
/* 0x1FD */ UNK_TYPE1 pad1FD[0x3];
/* 0x200 */ func_ptr unk200;
}; // size = 0x204

struct ActorEnFirefly {
/* 0x000 */ Actor base;
/* 0x144 */ UNK_TYPE1 pad144[0x1C];
/* 0x160 */ f32 unk160;
/* 0x164 */ UNK_TYPE1 pad164[0x24];
/* 0x188 */ func_ptr updateFunc;
/* 0x18C */ UNK_TYPE1 type;
/* 0x18D */ u8 unk18D;
/* 0x18E */ u8 unk18E;
/* 0x18F */ u8 unk18F;
/* 0x190 */ s16 unk190;
/* 0x192 */ UNK_TYPE1 pad192[0x152];
/* 0x2E4 */ f32 unk2E4;
/* 0x2E8 */ f32 unk2E8;
/* 0x2EC */ f32 unk2EC;
/* 0x2F0 */ f32 unk2F0;
/* 0x2F4 */ UNK_TYPE1 pad2F4[0x28];
/* 0x31C */ ColSphere collision;
}; // size = 0x374

typedef struct {
/* 0x000 */ Actor base;
/* 0x144 */ actor_func update;
/* 0x148 */ s16 collectibleFlagId;
/* 0x14A */ s16 unk14A;
/* 0x14C */ s16 unk14C;
/* 0x14E */ s16 unk14E;
/* 0x150 */ s16 unk150;
/* 0x152 */ s16 unk152;
/* 0x154 */ f32 unk154;
/* 0x158 */ ColCylinder collision;
/* 0x1A4 */ UNK_TYPE1 pad1A4[0x4];
} ActorEnItem00; // size = 0x1A8

struct ActorEnTest {
/* 0x000 */ Actor base;
/* 0x144 */ UNK_TYPE1 pad144[0x10];
/* 0x154 */ f32 unk154;
/* 0x158 */ UNK_TYPE1 pad158[0xB0];
/* 0x208 */ u8 unk208;
/* 0x209 */ UNK_TYPE1 pad209[0x1];
/* 0x20A */ u8 unk20A;
/* 0x20B */ UNK_TYPE1 pad20B[0x1];
/* 0x20C */ ActorEnTest20C unk20C[20];
}; // size = 0x6BC

typedef struct {
/* 0x000 */ Actor base;
/* 0x144 */ s8 unk144;
/* 0x145 */ u8 unk145;
/* 0x146 */ u16 unk146;
/* 0x148 */ u16 unk148;
/* 0x14A */ u16 unk14A;
/* 0x14C */ u8 unk14C;
/* 0x14D */ UNK_TYPE1 pad14D[0x3];
/* 0x150 */ actor_func unk150;
} ActorEnTest4; // size = 0x154

struct ActorObjBell {
/* 0x000 */ Actor base;
/* 0x144 */ UNK_TYPE1 pad144[0x18];
/* 0x15C */ ColSphere unk15C;
/* 0x1B4 */ ColSphere unk1B4;
/* 0x20C */ UNK_TYPE1 pad20C[0x2];
/* 0x20E */ s16 unk20E;
/* 0x210 */ UNK_TYPE1 pad210[0x4];
/* 0x214 */ s16 unk214;
/* 0x216 */ UNK_TYPE1 pad216[0x12];
}; // size = 0x228

struct ActorPlayer {
/* 0x000 */ Actor base;
/* 0x144 */ UNK_TYPE1 pad144[0x3];
/* 0x147 */ s8 unk147;
/* 0x148 */ UNK_TYPE1 pad148[0x3];
/* 0x14B */ u8 unk14B;
/* 0x14C */ UNK_TYPE1 pad14C[0x7];
/* 0x153 */ u8 unk153;
/* 0x154 */ UNK_TYPE1 pad154[0x1F8];
/* 0x34C */ Actor* unk34C;
/* 0x350 */ UNK_TYPE1 pad350[0x44];
/* 0x394 */ u8 unk394;
/* 0x395 */ UNK_TYPE1 pad395[0x37];
/* 0x3CC */ s16 unk3CC;
/* 0x3CE */ s8 unk3CE;
/* 0x3CF */ UNK_TYPE1 pad3CF[0x361];
/* 0x730 */ Actor* unk730;
/* 0x734 */ UNK_TYPE1 pad734[0x338];
/* 0xA6C */ u32 unkA6C;
/* 0xA70 */ u32 unkA70;
/* 0xA74 */ u32 unkA74;
/* 0xA78 */ UNK_TYPE1 padA78[0x8];
/* 0xA80 */ Actor* unkA80;
/* 0xA84 */ UNK_TYPE1 padA84[0x4];
/* 0xA88 */ Actor* unkA88;
/* 0xA8C */ f32 unkA8C;
/* 0xA90 */ UNK_TYPE1 padA90[0x44];
/* 0xAD4 */ s16 unkAD4;
/* 0xAD6 */ UNK_TYPE1 padAD6[0x8];
/* 0xADE */ u8 unkADE;
/* 0xADF */ UNK_TYPE1 padADF[0x4];
/* 0xAE3 */ s8 unkAE3;
/* 0xAE4 */ UNK_TYPE1 padAE4[0x44];
/* 0xB28 */ s16 unkB28;
/* 0xB2A */ UNK_TYPE1 padB2A[0x72];
/* 0xB9C */ Vec3f unkB9C;
/* 0xBA8 */ UNK_TYPE1 padBA8[0x1D0];
}; // size = 0xD78

struct DynaPolyActor {
/* 0x000 */ Actor actor;
/* 0x144 */ s32 dynaPolyId;
/* 0x148 */ f32 unk148;
/* 0x14C */ f32 unk14C;
/* 0x150 */ UNK_TYPE4 unk150;
/* 0x154 */ u32 unk154;
/* 0x158 */ u8 dynaFlags;
/* 0x159 */ UNK_TYPE1 pad159[0x3];
}; // size = 0x15C

struct ActorBgFuKaiten {
/* 0x000 */ DynaPolyActor bg;
/* 0x15C */ UNK_TYPE1 pad15C[0x4];
/* 0x160 */ f32 elevation;
/* 0x164 */ f32 bouceHeight;
/* 0x168 */ s16 rotationSpeed;
/* 0x16A */ s16 bounceSpeed;
/* 0x16C */ s16 bounce;
/* 0x16E */ UNK_TYPE1 pad16E[0x2];
}; // size = 0x170

struct ActorBgIknvObj {
/* 0x000 */ DynaPolyActor bg;
/* 0x15C */ ColCylinder collision;
/* 0x1A8 */ u32 displayListAddr;
/* 0x1AC */ actor_func updateFunc;
}; // size = 0x1B0


#endif
