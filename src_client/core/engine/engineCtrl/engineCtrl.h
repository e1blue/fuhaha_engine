#pragma once

// ----------------------------------------------------------------
// ----------------------------------------------------------------
// ----------------------------------------------------------------
// -------- タッチ処理

// タッチ状態構造体
struct engineCtrlTouch{
	struct{
		// ウインドウ内位置
		int x;
		int y;
	} window;
	struct{
		// スクリーン内位置
		int x;
		int y;
	} screen;
	// 押下中フラグ
	bool dn;
	// 移動中フラグ
	bool mv;
	// 占有中フラグ
	bool active;
};

// ----------------------------------------------------------------

// コントローラ状態メインループ計算
void engineCtrlTouchCalc(void);
// タッチ情報取得
struct engineCtrlTouch *engineCtrlTouchGet(enum engineCtrlTouchId touchId);
// 取得したタッチ情報占有
void engineCtrlTouchOwn(void);
// 取得して占有したタッチ情報の解放
void engineCtrlTouchFree(void);

// ----------------------------------------------------------------
// ----------------------------------------------------------------
// ----------------------------------------------------------------
// -------- ボタン処理

// ボタン状態構造体 計算
void engineCtrlButtonCalc(struct engineCtrlButton *this, double x0, double y0, double x1, double y1);

// ----------------------------------------------------------------
// ----------------------------------------------------------------
// ----------------------------------------------------------------

