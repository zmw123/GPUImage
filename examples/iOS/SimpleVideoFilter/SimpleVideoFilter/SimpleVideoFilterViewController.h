#import <UIKit/UIKit.h>
#import "GPUImage.h"

@interface SimpleVideoFilterViewController : UIViewController
{
    GPUImageVideoCamera *videoCamera;
    GPUImageOutput<GPUImageInput> *filter;
    GPUImageMovieWriter *movieWriter;
    GPUImageOutput<GPUImageInput> *fmFilter;
}

- (IBAction)updateSliderValue:(id)sender;

@end
