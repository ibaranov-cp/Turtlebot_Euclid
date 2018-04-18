#ifndef _ROS_moveit_msgs_ExecuteTrajectoryActionResult_h
#define _ROS_moveit_msgs_ExecuteTrajectoryActionResult_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalStatus.h"
#include "moveit_msgs/ExecuteTrajectoryResult.h"

namespace moveit_msgs
{

  class ExecuteTrajectoryActionResult : public ros::Msg
  {
    public:
      std_msgs::Header header;
      actionlib_msgs::GoalStatus status;
      moveit_msgs::ExecuteTrajectoryResult result;

    ExecuteTrajectoryActionResult():
      header(),
      status(),
      result()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->status.serialize(outbuffer + offset);
      offset += this->result.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->status.deserialize(inbuffer + offset);
      offset += this->result.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "moveit_msgs/ExecuteTrajectoryActionResult"; };
    const char * getMD5(){ return "8aaeab5c1cdb613e6a2913ebcc104c0d"; };

  };

}
#endif