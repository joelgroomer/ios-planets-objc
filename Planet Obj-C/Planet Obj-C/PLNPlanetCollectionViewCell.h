//
//  PLNPlanetCollectionViewCell.h
//  Planet Obj-C
//
//  Created by Joel Groomer on 2/1/20.
//  Copyright © 2020 Julltron. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PLNPlanetCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView *imgPlanet;
@property (weak, nonatomic) IBOutlet UILabel *lblPlanetName;

@end

NS_ASSUME_NONNULL_END
