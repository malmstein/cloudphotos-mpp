import UIKit
import shared

class ViewController: UIViewController {
    
    typealias StringsClosure = ([String]) -> Void
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.label.text = PlatformKt.platformName()
        
        let api = Api()
        let repository = PhotosRepository(api: api)
        
        repository.loadInstagramAsync { (photos) -> KotlinUnit in
            print(photos)
            return KotlinUnit()
        }
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    
    @IBOutlet weak var label: UILabel!
}
