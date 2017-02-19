# ブランチ管理規約

## 主要ブランチ
現時点での固定のブランチ名は以下の通りとする
- engine
- engine_develop
- game
- game_develop

今後リリース準備用の'engine_release'、'game_release'の二つの
ブランチを追加する予定

### 各ブランチの役割
### engine
使える状態のエンジン (フレームワーク)
バグがあった場合フィーチャーブランチを作成して`engine_develop`に
プルリクエストを送る

### engine_develop
開発中のエンジン。
各フィーチャーブランチから受けたプルリクエストを元にマージする




#### フィーチャーブランチの扱い
機能レベルで開発を分割したブランチ。
各developブランチにプルリクエストが通れば基本的にリモートからは削除。
再度各developブランチからフェッチする


命名規則は、`githubユーザー名/[engine|game]_(プラットフォーム識別子)_機能名`とする。
プラットフォーム識別子は以下のとおり。

|プラットフォーム|識別子|
|:-:|:-:|
|Windows10|win10|
|Android|aos|
  
例：ユーザー`mstybird`がWindows10向けエンジンの新機能`Math`を開発する場合
例：`mstybird/engine_win10_Math`
