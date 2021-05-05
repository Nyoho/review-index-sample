= 索引の埋め込み
@<hidx>{索引}@<hidx>{索引<<>>埋め込み}索引の@<hidx>{埋め込み}埋め込みはなかなか難しい。

 * =系の見出しに入れると、@<hidx>{目次}目次にも入ってしまってまずいことになる。後続の段落に付ける必要がある。
 * かといって、hidxだけしかない段落にしてしまうと、HTML/IDGXMLでまずいことになる（表示コンテンツのない空の@<hidx>{p要素}p要素ができてしまう）。
 * ある単語への索引を作る場合、索引挿入位置@<hidx>{索引<<>>挿入}は単語の前に入れる必要がある。
 * TeX PDFページものの場合、索引挿入位置はおおむねそのページ@<hidx>{ページ}であればよいことになるが（もちろんずれたときには自力で対処が必要だが）、EPUBの場合はリフロー・リサイズでページを同定できないため、ジャンプしたときに「正確に正しい位置」に飛ぶ、つまり挿入位置もそのように考える必要がある。
