#pragma once
#include "IScene.h"

/// <summary>
/// ISceneクラスを継承したStageSceneを宣言
/// </summary>
class StageScene : public IScene
{
public://メンバ関数

	///初期化処理
	void Initialize() override;

	///更新処理
	void Update(char* keys, char* preKeys) override ;

	///描画処理
	void Draw() override;

};

