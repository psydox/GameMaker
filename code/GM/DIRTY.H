//-----
// dirty.h          May 24,1993                              Gregory Stone
// Dirty rectangle / Main Memory screen buffer display system header file.
//-----

int InitDirty(void);
void UnInitDirty(void);

void SvgaBufScrnBox(int x,int y,int x1, int y1);
void DrawDirtyRects(void);
void ClearDirtyRects(void);
void AddDirtyRect(int x,int y, int x1, int y1);
void AddDirtyRect(unsigned int addr,int len,int wid);

extern uint ScratchSeg;

extern "C"
  {
  extern void BufFourPoint(int x,int y,unsigned char far *addr);
  extern void BufDrawBlk    (int x,int y,unsigned char *blk);
  extern void BufDrawBlkAddr(unsigned int ScrnLoc,unsigned char *blk);
  extern void BufGetBlk     (int x,int y,unsigned char *blk);
  extern void BufGetBlkAddr (unsigned int ScrnLoc,unsigned char *blk);
  extern void BufPoint(int x,int y,unsigned char col);
  extern void BufDrawSpBlk    (int x,int y,char rotation,unsigned char *blk);
  extern void BufDrawSpBlkAddr(unsigned int ScrnLoc,char rotation,unsigned char *blk);
  extern void BufDraw4x4Addr(unsigned int ScrnLoc,unsigned char *Pict);
  extern void BufDraw4x20Addr(unsigned int ScrnLoc,unsigned char *Pict);

//  extern unsigned char GetCol(int x,int y);
  }


