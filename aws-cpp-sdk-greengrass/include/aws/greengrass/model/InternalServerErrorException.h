﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/ErrorDetail.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * General error information.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/InternalServerErrorException">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API InternalServerErrorException
  {
  public:
    InternalServerErrorException();
    InternalServerErrorException(Aws::Utils::Json::JsonView jsonValue);
    InternalServerErrorException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Details about the error.
     */
    inline const Aws::Vector<ErrorDetail>& GetErrorDetails() const{ return m_errorDetails; }

    /**
     * Details about the error.
     */
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }

    /**
     * Details about the error.
     */
    inline void SetErrorDetails(const Aws::Vector<ErrorDetail>& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }

    /**
     * Details about the error.
     */
    inline void SetErrorDetails(Aws::Vector<ErrorDetail>&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::move(value); }

    /**
     * Details about the error.
     */
    inline InternalServerErrorException& WithErrorDetails(const Aws::Vector<ErrorDetail>& value) { SetErrorDetails(value); return *this;}

    /**
     * Details about the error.
     */
    inline InternalServerErrorException& WithErrorDetails(Aws::Vector<ErrorDetail>&& value) { SetErrorDetails(std::move(value)); return *this;}

    /**
     * Details about the error.
     */
    inline InternalServerErrorException& AddErrorDetails(const ErrorDetail& value) { m_errorDetailsHasBeenSet = true; m_errorDetails.push_back(value); return *this; }

    /**
     * Details about the error.
     */
    inline InternalServerErrorException& AddErrorDetails(ErrorDetail&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails.push_back(std::move(value)); return *this; }


    /**
     * A message containing information about the error.
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * A message containing information about the error.
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * A message containing information about the error.
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * A message containing information about the error.
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * A message containing information about the error.
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * A message containing information about the error.
     */
    inline InternalServerErrorException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * A message containing information about the error.
     */
    inline InternalServerErrorException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * A message containing information about the error.
     */
    inline InternalServerErrorException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::Vector<ErrorDetail> m_errorDetails;
    bool m_errorDetailsHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
