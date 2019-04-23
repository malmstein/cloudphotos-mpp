import UIKit
import shared

class ViewController: UIViewController {

  // MARK: Data

  private let api: Api
  private let repository: PhotosRepository

  fileprivate var photoUrls: [URL] = [] {
    didSet { collectionView.reloadData() }
  }

  // MARK: UI Elements

  private lazy var collectionViewLayout: UICollectionViewLayout = {
    let layout = UICollectionViewFlowLayout()
    layout.itemSize = CGSize(width: Cell.itemDimension, height: Cell.itemDimension)
    layout.minimumLineSpacing = Cell.itemGutter
    layout.minimumInteritemSpacing = Cell.itemGutter
    return layout
  }()

  private lazy var collectionView: UICollectionView = {
    let view = UICollectionView(frame: .zero, collectionViewLayout: collectionViewLayout)
    view.register(Cell.self, forCellWithReuseIdentifier: Cell.reuseIdentifier)
    view.dataSource = self
    return view
  }()

  // MARK: Init

  init() {
    self.api = Api()
    self.repository = PhotosRepository(api: api)
    super.init(nibName: nil, bundle: nil)
    self.title = PlatformKt.platformName()
  }

  required init?(coder aDecoder: NSCoder) {
    fatalError("storyboards are incompatible with truth and beauty")
  }

  // MARK: UIViewController

  override func loadView() {
    super.loadView()

    view.addSubview(collectionView)
    collectionView.translatesAutoresizingMaskIntoConstraints = false
    collectionView.leadingAnchor.constraint(equalTo: view.leadingAnchor).isActive = true
    collectionView.topAnchor.constraint(equalTo: view.topAnchor).isActive = true
    collectionView.trailingAnchor.constraint(equalTo: view.trailingAnchor).isActive = true
    collectionView.bottomAnchor.constraint(equalTo: view.bottomAnchor).isActive = true
  }

  override func viewDidLoad() {
    super.viewDidLoad()

    repository.loadInstagramAsync { [weak self] photos in
      guard let self = self else { return KotlinUnit() }
      self.photoUrls = photos.compactMap { URL(string: $0.thumbnailUrl) }
      return KotlinUnit()
    }

  }
}

// MARK: -

extension ViewController: UICollectionViewDataSource {

  // MARK: UICollectionViewDataSource

  func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
    return photoUrls.count
  }

  func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
    let cell = collectionView.dequeueReusableCell(withReuseIdentifier: Cell.reuseIdentifier, for: indexPath) as! Cell
    cell.photoUrl = photoUrls[indexPath.item]
    return cell
  }

}
