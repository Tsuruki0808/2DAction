<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>鶴木瑛介_ポートフォリオ</title>

<meta name="viewport" content="width=device-width, initial-scale=1.0">


</head>
<body>

   
        <div style="display: flex; align-items: flex-start; justify-content: center; flex-wrap: wrap;">
            <!-- 名前部分 -->
        

            <!-- 1,GravityFlipの項目まとめ -->  
            <p class="mokuzi" id = "1">GravityFlip<詳細></p>


      <div>
            <p>(1)コヨーテタイム</p><img src="img/コヨーテタイム.gif" width = "300px" height="auto" alt="Example Image">
            <p>(2)先行入力</p><img src="img/先行入力.gif" width = "300px" height="auto" alt="Example Image">

           
        </div>

         
     

<div class="content">
    <p style="font-size: 20px; margin-left: 20px; align-self: flex-start;">
        Gif画像(1)がコヨーテタイム、床から離れてから数フレームの間はジャンプ可能にし、その後ジャンプ不可にフラグを変更する<br>
        <br>
        Gif画像(2)が選考入力、コードの通りボタンが押されたら数フレームの間ジャンプの待機に移行、その状態で床に着地すると即ジャンプに遷移<br>
        
    </p>

<img src="img/ジャンプ.png" width = "800px"  alt="Example Image">
          
</div>







    <!-- 1,GravityFlipの項目まとめ -->  
    <p class="mokuzi" id = "1">GravityFlip<仕様書の発注></p>


    <div class="content">
        <p style="font-size: 20px; margin-left: 20px; align-self: flex-start;">
         steamに投稿するにあたり、キャラの差し替え、BGM、SEの変更を行う。プログラマーの立場でありながらイラスト、ミュージックの仕様書を作成。<br>
        
        </p>
        <img src="img/キャラ画像.jpg" width = "800px"  alt="Example Image">
    
        <iframe src="https://docs.google.com/spreadsheets/d/e/2PACX-1vTf4MyctA7Huw4tals_FfT_DMWWs6LLi3hmD2G-UtNGvcRG11kUyoS0OcW09AszEA/pubhtml?widget=true&amp;headers=false" 
        width = "1000px" height="400px"></iframe>
        
        
    </div>

    
        
    
  
    

     <!-- ホームに戻るボタン -->
  <div class="l-header-cta-button_wrapper">
    <a href="index.html#1" class="l-header-cta-button_a">ホームに戻る</a>
  </div>

          

    



<!-- これより上に追加していく-->


<a class="mokuzi" href="index.html#1" style="font-size: 30px;">ホームに戻る</a>

       
    </div>

    <style>


.l-header-cta-button_wrapper {
    position: fixed;
    top: 10px;
    left: 10px;
  }

  .l-header-cta-button_a {
    font-size: 12px;
    display: block;
    width: 80px;
    height: 80px;
    background-image: url("img/haikei.png"); /* 背景画像を指定 */
    background-size: cover; /* 画像がボタン全体を覆うように */
    background-position: center; /* 画像を中央に配置 */
    color: white;
    text-align: center;
    line-height: 80px;
    text-decoration: none;
    font-weight: bold;
    border-radius: 5px;
    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.2);
  }

  .l-header-cta-button_a:hover {
    opacity: 0.8; /* ホバー時に少し透明に */
  }





        .mobile-message {
    position: fixed;
    top: 50%;
    left: 50%;
    transform: translate(-50%, -50%);
    background: rgba(0,0,0,0.7);
    color: white;
    padding: 10px;
    text-align: center;
    width: 80%;
    max-width: 400px;
    border-radius: 5px;
    z-index: 9999; /* 最前面に表示 */
  }

  /* PCとスマホの横画面では非表示 */
  @media screen and (min-width: 769px), (orientation: landscape) {
    .mobile-message {
      display: none;
    }
  }

        ul {
        display: flex;
        justify-content: flex-start;
      }
      
      
              .GravityFlip_table {
          margin-left: auto; /* 左の余白を自動に設定 */
          margin-right: 0;   /* 右の余白をゼロに設定 */
          width: auto;       /* 必要に応じてテーブルの幅をコンテンツに合わせる */
          border-collapse: collapse;
      }
      
      .GravityFlip_table th, .GravityFlip_table td {
          border: 1px solid #000;
          padding: 10px;
      }
            
      
       /* YouTube動画を左寄せにするスタイル */
       .GravityFlip_Youtube {
                  display: block;
                  margin-left: 0; /* 左寄せ */
                  margin-right: auto; /* 右マージンを自動にして左寄せ */
              }
      
              .container {
                  width: 100%;
                  display: flex;
                  justify-content: center;
                  align-items: center;
                  min-height: 100vh;
              }
      
              .zikosyoukai {
                  font-size: 48px;
                  font-weight: bold;
                  text-align: center;
                  width: 100%;
                  height: 200px;
                  margin-bottom: 20px;
                  background-image: url('img/haikei.png');
                  background-size: cover;
                  background-position: center;
                  color: white;
                  padding: 20px;
                  display: flex;
                  justify-content: center;
                  align-items: center;
                  position: relative;
              }
      
              .mokuzi {
                  font-size: 48px;
                  font-weight: bold;
                  text-align: center;
                  width: 100%;
                  height: 100px;
                  margin-bottom: 20px;
                  background-image: url('img/haikei.png');
                  background-size: cover;
                  background-position: center;
                  color: white;
                  padding: 20px;
                  display: flex;
                  justify-content: center;
                  align-items: center;
                  position: relative;
              }
      

            /* 追加したレスポンシブテーブル用のスタイル */
.responsive-table {
  position: relative;
  width: 100%;  /* テーブルが親要素の幅をフルに使う */
  table-layout: auto; /* 内容に応じて幅を調整 */
  overflow-x: auto; /* 横スクロールを有効にする */
}
      
             
      
              @media screen and (max-width: 768px) {
                  .container > div {
                      
                      flex-direction: column;
                      align-items: center;
                      justify-content: center;
                      width: 100%;
                      
                      display: block; /* 縦並び */
          margin-bottom: 20px;
                  }
      
                  img {
                      margin-bottom: 30px;
                      margin-left: auto;
                      margin-right: auto;
                      width: 300px;
                  }
      
                  table {
                      margin-left: 0;
                      margin-top: 70px;
                      width: 100%;
                      font-size: 18px;
                      padding: 15px;
                      border-collapse: collapse;
                      border: 2px solid black;
                  }
      
                  th, td {
                      border: 1px solid black;
                      padding: 10px;
                  }
                  .GravityFlip_wrapper {
              display: flex;
              align-items: flex-start; /* 上揃え */
              margin-left: 20px; /* iframeとpタグの間に隙間 */
              flex-wrap: wrap; /* 画面幅に応じて折り返し */
          }
                  
              }
      
              @media screen and (min-width: 768px) {
                  .container > div {
                      flex-direction: row;
                      align-items: flex-start;
                      justify-content: center;
                  }
      
                  img {
                      margin-right: 40px;
                 
                  }
      
                  table {
                      margin-left: 0;
                      width: 60%;
                      font-size: 20px;
                      margin-top: 120px;
                      padding: 20px;
                      border-collapse: collapse;
                      border: 3px solid black;
                  }
      
                  th, td {
                      border: 2px solid black;
                      padding: 10px;
                  }
              }
          </style>

<style>
    /* 動画コンテナにアスペクト比を設定 */
.video-container {
    position: relative;
    width: 100%;
    max-width: 600px; /* 最大幅を設定 */
    aspect-ratio: 16 / 9; /* アスペクト比16:9 */
    margin-left: 0; /* 左寄せ */
    margin-right: auto; /* 右側の余白を自動調整 */
    display: inline-block; /* 要素をインラインブロックで表示 */
}

/* iframeスタイル */
.video-container iframe {
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    border: none;
}
.content {
        max-width: 400px; /* コンテンツの最大幅 */
        flex: 1; /* コンテンツの幅を自動調整 */
    }


</style>

<style>
    /* 親コンテナを中央配置 */
    .video-container-wrapper {
        display: flex;
        justify-content: center; /* 水平方向に中央寄せ */
        align-items: center; /* 垂直方向に中央寄せ */
      
    }

    /* 動画コンテナにアスペクト比を設定 */
    .video-container {
        position: relative;
        width: 100%;
        max-width: 600px; /* 最大幅を設定 */
        aspect-ratio: 16 / 9; /* アスペクト比16:9 */
        display: inline-block; /* 要素をインラインブロックで表示 */
        margin: 0; /* 動画コンテナの余白をリセット */
    }

    /* iframeスタイル */
    .video-container iframe {
        position: absolute;
        top: 0;
        left: 0;
        width: 100%;
        height: 100%;
        border: none;
    }

    .content {
        max-width: 400px; /* コンテンツの最大幅 */
        flex: 1; /* コンテンツの幅を自動調整 */
    }
</style>


<script>
    // ポップアップをタッチしたら消す
    document.getElementById('popup-message').addEventListener('touchstart', function() {
      this.style.display = 'none'; // ポップアップを非表示にする
    });
  </script>
</body>
</html>
