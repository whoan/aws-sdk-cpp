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

#include <aws/lambda/model/EC2UnexpectedException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

EC2UnexpectedException::EC2UnexpectedException() : 
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_eC2ErrorCodeHasBeenSet(false)
{
}

EC2UnexpectedException::EC2UnexpectedException(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_eC2ErrorCodeHasBeenSet(false)
{
  *this = jsonValue;
}

EC2UnexpectedException& EC2UnexpectedException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EC2ErrorCode"))
  {
    m_eC2ErrorCode = jsonValue.GetString("EC2ErrorCode");

    m_eC2ErrorCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue EC2UnexpectedException::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_eC2ErrorCodeHasBeenSet)
  {
   payload.WithString("EC2ErrorCode", m_eC2ErrorCode);

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
