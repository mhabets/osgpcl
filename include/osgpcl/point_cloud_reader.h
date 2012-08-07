/*
 * point_cloud_reader.h
 *
 *  Created on: Jul 27, 2012
 *      Author: Adam Stambler
 */

#ifndef POINT_CLOUD_READER_H_
#define POINT_CLOUD_READER_H_

#include <osgpcl/point_cloud.h>

#include <osgDB/ReaderWriter>
#include <osgDB/Options>

#include <osgDB/Registry>



namespace osgpcl
{

  class PointCloudReader : public osgDB::ReaderWriter
  {
    public:
      PointCloudReader ();
      PointCloudReader(const ReaderWriter& rw,const osg::CopyOp& copyop=osg::CopyOp::SHALLOW_COPY);
      virtual ~PointCloudReader ();

      META_Object(osgpcl,PointCloudReader);

      /** Return available features*/
      virtual Features supportedFeatures() const;

      virtual ReadResult readNode(const std::string& fileName, const osgDB::ReaderWriter::Options* options) const;

  };

} /* namespace osgPCL */

//USE_OSGPLUGIN(pcd)

#endif /* POINT_CLOUD_READER_H_ */
