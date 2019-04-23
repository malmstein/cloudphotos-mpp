import UIKit

class Cell: UICollectionViewCell {

  // MARK: Constants

  static let reuseIdentifier: String = "Cell"
  static let itemGutter: CGFloat = 2.0
  static let itemDimension: CGFloat = floor((UIScreen.main.bounds.width - 2*itemGutter) / 3)

  // MARK: Data

  var photoUrl: URL? {
    set { if newValue != downloadingPhotoUrl { downloadingPhotoUrl = newValue } }
    get { return downloadingPhotoUrl }
  }

  private var downloadingPhotoUrl: URL? {
    didSet { downloadPhoto() }
  }

  // MARK: UI Elements

  private lazy var imageView: UIImageView = {
    let view = UIImageView()
    return view
  }()

  // MARK: Init

  override init(frame: CGRect) {
    super.init(frame: frame)

    contentView.addSubview(imageView)
    imageView.translatesAutoresizingMaskIntoConstraints = false
    imageView.leadingAnchor.constraint(equalTo: contentView.leadingAnchor).isActive = true
    imageView.topAnchor.constraint(equalTo: contentView.topAnchor).isActive = true
    imageView.trailingAnchor.constraint(equalTo: contentView.trailingAnchor).isActive = true
    imageView.bottomAnchor.constraint(equalTo: contentView.bottomAnchor).isActive = true
  }

  required init?(coder aDecoder: NSCoder) {
    fatalError("Storyboards are incompatible with truth and beauty")
  }

  // MARK: UICollectionViewCell

  override func prepareForReuse() {
    super.prepareForReuse()
    downloadingPhotoUrl = nil
  }

  // MARK: Actions

  private func downloadPhoto() {
    guard let url = downloadingPhotoUrl else {
      imageView.image = nil
      return
    }

    DispatchQueue.global(qos: .userInitiated).async {
      if
        let data = try? Data(contentsOf: url),
        let image = UIImage(data: data)
      {
        DispatchQueue.main.async { [weak self] in
          guard let self = self else { return }
          if self.downloadingPhotoUrl == url {
            self.imageView.image = image
          } else {
            self.imageView.image = nil
          }
        }
      } else {
        DispatchQueue.main.async { [weak self] in
          self?.imageView.image = nil
        }
      }
    }
  }

}
